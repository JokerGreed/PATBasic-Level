#include <iostream>
#include <algorithm>
using namespace std;

/*
1030 完美数列
本题核心：
（1）范围，p和数组numN要用Long int 类型
（2）时间复杂度，用递推来降低时间复杂度（简易版的动归） 
*/

int main(){
	int N;
	long int p;
	long int numN[100010];
	cin>>N>>p;
	int i,j;
	for(i=0;i<N;i++)
		cin>>numN[i];
	sort(numN,numN+N); 	
	int ans=0;
	for(i=0;i<N;i++){
		for(j=ans+i;j<N;j++){
			if(numN[j]>numN[i]*p)
				break;
			if(j-i+1>ans)
				ans=j-i+1;
		}
	}
	cout<<ans;
	
	return 0;
} 
