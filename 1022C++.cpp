#include <iostream>
using namespace std;
 
/*
1022 D进制的A+B
本题核心：
A,B的范围，决定A+B不可能用int直接表示 
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
