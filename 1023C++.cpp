#include <iostream>
using namespace std;

/*
1023 �����С��
������ģ�
�ҵ���С�Ĵ�ͷ���֣�0���⣩�󣬰���С��������������� 
*/ 

int main(){
	int d[10];
	for(int i=0;i<10;i++)
		cin>>d[i];

	for(int i=1;i<10;i++){
		if(d[i]!=0){
			d[i]--;
			cout<<i;
			break;
		}
	}
	for(int i=0;i<10;i++){
		while(d[i]){
			cout<<i;
			d[i]--;
		}
	}
	
	return 0;
} 
