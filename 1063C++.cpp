#include <iostream>
#include <cmath> 
using namespace std;

/*
1063 �����װ뾶
������ģ�
��1���װ뾶���㹫ʽ 
��2����������ͳһ 
*/

int main(){
	int N;
	cin>>N;
	double m=0;
	double a,b;
	while(N--){
		cin>>a>>b;
		m=max(a*a+b*b,m);
	}
	printf("%.2lf",sqrt(m));
	return 0;
}
