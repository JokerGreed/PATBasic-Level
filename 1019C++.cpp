#include <iostream>
#include <algorithm>
using namespace std;

/*
1019 数字黑洞
本题核心：
枚举，同时注意string向N[]转换时，不能用i=4，会超时 
*/

int main(){
	string s;
	cin>>s;
	int N[4]={0};
	for(int i=0;i<s.length();i++)
		N[i]=s[i]-'0';
	int cha=1;
	while(1){
		sort(N,N+4);
		int Nmax=0,Nmin=0;
		for(int i=0;i<4;i++){
			Nmin=Nmin*10+N[i];
			Nmax=Nmax*10+N[3-i];
		}
		cha=Nmax-Nmin;
		printf("%04d - %04d = %04d\n",Nmax,Nmin,cha);
		if(cha==6174||cha==0)
			break;
		N[0]=cha/1000;
		N[1]=cha%1000/100;
		N[2]=cha%100/10;
		N[3]=cha%10;
	}
	return 0;
}
