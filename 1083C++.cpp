#include <iostream>
#include <cmath> 
using namespace std;

/*
1083 是否存在相等的差 
*/

int main(){
	int N;
	cin>>N;
	int num[10010]={0};
	for(int i=1;i<=N;i++){
		int a;
		cin>>a;
		num[abs(a-i)]++;
	}
	for(int i=10000;i>=0;i--){
		if(num[i]>=2)
			printf("%d %d\n",i,num[i]);
	}
	return 0;
}
