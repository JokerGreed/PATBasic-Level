#include <iostream>
using namespace std;

/*
1049 ���е�Ƭ�κ�
�������
��ѧ��ģ 
*/

int main(){
	int N;
	cin>>N;
	double A[100100];
	for(int i=0;i<N;i++)
		cin>>A[i];
	double sum=0;
	for(int i=0;i<N;i++)
		sum+=A[i]*(N-i)*(i+1);
	printf("%.2f",sum);
	
	return 0;
}
