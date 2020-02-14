#include <iostream>
using namespace std;

/*
1064 朋友数
本题核心：
如何使数字各个位上的数相加 
*/

int sum(int a){
	int num=0;
	while(a%10||a/10){
		num+=a%10;
		a/=10;
	}
	return num;
}

int main(){
	int N;
	cin>>N;
	int flag[40]={0};
	int ans=0;
	while(N--){
		int num;
		cin>>num;
		int m=sum(num);
//		cout<<m<<endl;
		if(!flag[m])
			ans++;
		flag[m]++;
	}
	cout<<ans<<endl;
	for(int i=0,m=0;i<40;i++){
		if(flag[i]){
			if(m==1)
				cout<<" ";
			cout<<i;
			m=1;
		}
	}
	cout<<endl;
	
	return 0;
}
