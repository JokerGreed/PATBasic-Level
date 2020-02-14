#include <iostream>
using namespace std;

/*
1087 有多少不同的值
*/

int main(){
	int N;
	cin>>N;
	int num[10500]={0};
	for(int i=1;i<=N;i++){
		int sum=0;
		sum=i/2+i/3+i/5;
		num[sum]++;
	}
	int ans=0;
	for(int i=0;i<10500;i++)
		if(num[i])
			ans++;
			
	cout<<ans;
	
	return 0;
}
