#include <iostream>
using namespace std;
 
/*
1022 D���Ƶ�A+B
������ģ�
A,B�ķ�Χ������A+B��������intֱ�ӱ�ʾ 
*/

int main(){
	int A,B,D;
	cin>>A>>B>>D;
	int C;
	C=A+B;
	int num[32]={0},count=0;
	while(C/D){
		num[count++]=C%D;
		C=C/D;
	}
	num[count]=C;
	while(count>=0){
		cout<<num[count--];
	}
	return 0;
} 
