#include <iostream>
using namespace std;
/*
1006 ������ʽ������� 

������ģ�
��1����ʮ�ٵ���ֵ��ȡ
��2���ж�n�м�λ�� 
*/


int main(){
	int n;
	cin>>n;
	int bai,shi,ge;
	bai=n/100;
	shi=n%100/10;
	ge=n%10;
	int i;
	if(bai!=0){
		for(i=0;i<bai;i++)
			cout<<"B";
		for(i=0;i<shi;i++)
			cout<<"S";
		for(i=0;i<ge;i++)
			cout<<i+1;
		cout<<endl;
	}
	else if(shi!=0){
		for(i=0;i<shi;i++)
			cout<<"S";
		for(i=0;i<ge;i++)
			cout<<i+1;
		cout<<endl;
	}
	else{
		for(i=0;i<ge;i++)
			cout<<i+1;
		cout<<endl;
	}
	return 0;
}
