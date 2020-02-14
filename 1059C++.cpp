#include <iostream>
#include <cmath>
using namespace std;

/*
1059 C语言竞赛
本题核心：
（1）统计
（2）协调（避免运行超时） 
*/

bool isprime(int a){
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0)
			return false;
	
	return true;
}

int main(){
	int N;
	cin>>N;
	int num[10010]={0};
	int flag[10010]={0};
	for(int i=0;i<N;i++){
		int t;
		cin>>t;
		num[t]=i+1;
		flag[t]=1;
	}
	int K;
	cin>>K;
	while(K--){
		int t;
		cin>>t;
		if(flag[t]){
			flag[t]=0;
			if(num[t]==1)
				printf("%04d: Mystery Award\n",t);
			else if(isprime(num[t]))
				printf("%04d: Minion\n",t);
			else
				printf("%04d: Chocolate\n",t);
		}
		else{
			if(num[t])
				printf("%04d: Checked\n",t);
			else
				printf("%04d: Are you kidding?\n",t);
		}
	}
	
	
	
	return 0;
} 
