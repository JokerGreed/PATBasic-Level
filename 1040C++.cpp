#include <iostream>
#include <cstring>
using namespace std;

/*
1040 �м���PAT 
������ģ�
��1��P��T�ļ���
��2��PAT�����Ĺ�ϵ 
*/ 

int main(){
	char s[100100];
	cin>>s;
	int len=strlen(s);
	int countT=0,countP=0,countA=0;
	for(int i=0;i<len;i++)
		if(s[i]=='T')
			countT++;
			
	for(int i=0;i<len;i++){
		if(s[i]=='P')
			countP++;
		if(s[i]=='T')
			countT--;
		if(s[i]=='A')
			countA=(countA+(countP*countT)%1000000007)%1000000007;
	}
	cout<<countA;
	
	
	return 0;
} 
