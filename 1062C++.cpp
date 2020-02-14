#include <iostream>
using namespace std;

/*
1062 最简分数
本题核心：
两个分数并为给出前小后大 
*/

int isprime(int a,int b){
	int m=min(a,b);
	for(int i=2;i<=m;i++)
		if(a%i==0&&b%i==0)
			return i;
	return 0;
}

void test(int a,int b,int c,int d,int k){
//	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<k<<endl;
	for(int i=1,flag=0;i<k;i++){
		if(isprime(i,k))
			continue;
		if(i*b<=a*k)
			continue;
		if(i*d>=c*k)
			break;
		if(flag)
			cout<<" ";
		cout<<i<<"/"<<k;
		flag=1;
	}
}

int main(){
	int N1,M1,N2,M2;
	scanf("%d/%d",&N1,&M1);
	scanf("%d/%d",&N2,&M2);
	int K;
	cin>>K;
	int flag=0;
	if(N1*M2>N2*M1)
		flag=1;
	
	if(flag)
		test(N2,M2,N1,M1,K);
	else	
		test(N1,M1,N2,M2,K);
	
	return 0;
}
