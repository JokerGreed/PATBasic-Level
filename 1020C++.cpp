#include <iostream>
using namespace std;
/*
1020 �±�
������ģ�
��1��N����Ϊ1000��������int
��2�����ͳ��0-9���ֵĸ��� 
*/ 
int main(){
	string N;
	cin>>N;
	int d[10]={0};
	int len=N.length();
	for(int i=0;i<len;i++)
		d[N[i]-'0']++;
	
	for(int i=0;i<10;i++){
		if(d[i]!=0)
			cout<<i<<":"<<d[i]<<endl;
	}
	return 0;
}
