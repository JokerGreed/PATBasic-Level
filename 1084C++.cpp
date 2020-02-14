#include <iostream>
#include <cstring>
using namespace std;

/*
1084 外观数列
*/

int main(){
	char d;
	int N;
	cin>>d>>N;
	char a[100000]={'\0'};
	a[0]=d;
	for(int i=2;i<=N;i++){
		char b[100000]={'\0'};
		int ans=0,num=0;
		for(int j=0;j<strlen(a);j++){
			if(a[j]==a[j+1])
				num++;
			else{
				b[ans++]=a[j];
				if(num==0)
					b[ans++]='0'+1;
				else{
					int temp=num+1;
					num=0;
					b[ans++]=temp%10+'0';	
				}
			}
		}
		strcpy(a,b);
	}
	cout<<a;
	
	return 0;
} 
