#include <iostream>
#include <cstring>
using namespace std;

/*
1074 ÓîÖæÎÞµÐ¼Ó·¨Æ÷
*/

int main(){
	char N[22];
	cin>>N;
	char n1[22],n2[22];
	cin>>n1;
	cin>>n2;
	int len=strlen(N);
	int len1=strlen(n1);
	int len2=strlen(n2);
	
	if(len1<len)
		for(int i=len-1;i>=0;i--){
			if(len-len1<=i)
				n1[i]=n1[i-(len-len1)];
			else
				n1[i]='0';
		}
	if(len2<len)
		for(int i=len-1;i>=0;i--){
			if(len-len2<=i)
				n2[i]=n2[i-(len-len2)];
			else
				n2[i]='0';
		}
	
	int flag=0;
	for(int i=len-1;i>=0;i--){
		int n=N[i]-'0';
		if(n==0)
			n=10;
		int num=0;
		num=n1[i]-'0'+n2[i]-'0';
		if(flag){
			num+=flag;
			flag=0;
		}
		if(num>=n){
			flag=num/n;
			N[i]=num%n+'0';
		}
		else
			N[i]=num+'0';
	}
	int num=0;
	if(flag)
		num=flag;
	for(int i=0;i<len;i++)
		num=num*10+N[i]-'0';
	cout<<num<<endl;
	return 0;
}
