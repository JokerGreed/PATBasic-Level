#include <iostream>
#include <cstring>
using namespace std;
/*
1048 数字加密
本题核心：
讨论A，B长短问题 
*/
int main(){
	char A[101];
	char B[101];
	cin>>A;
	cin>>B;
	int len1=strlen(A);
	int len2=strlen(B);
	int len=max(len1,len2);
	if(len1<len){
		for(int i=len-1;i>=0;i--)
			if(i<len-len1)
				A[i]='0';
			else
				A[i]=A[i-(len-len1)];
		A[len]='\0';
	}
	if(len2<len){
		for(int i=len-1;i>=0;i--)
			if(i<len-len2)
				B[i]='0';
			else
				B[i]=B[i-(len-len2)];
	}
//	cout<<A<<endl<<B<<endl;
		
	for(int i=0;i<len;i++){
		int num;
		if((len-i)%2==0){
			num=B[i]-A[i];
			if(num<0)
				num+=10;
			cout<<num;
		}
		else{
			num=(A[i]-'0'+B[i]-'0')%13;
			if(num<10)
				cout<<num;
			else if(num==10)
				cout<<"J";
			else if(num==11)
				cout<<"Q";
			else if(num==12)
				cout<<"K";
		}
	}
	
	
	return 0;
}
