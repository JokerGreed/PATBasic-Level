#include <iostream>
#include <cstring>
using namespace std;
/*
1008 ����Ԫ��ѭ����������
������ģ�
��1���ɽ�Ԫ�����ӳ���ΧN+M
��2��ע��M��ȡֵ���ܻ����N 
*/
#define MAXN 220
int a[MAXN];

int main(){
	int N,M;
	cin>>N>>M;
	M=M%N;
	memset(a,0,sizeof(a));
	for(int i=1;i<=N;i++)
		cin>>a[i];
	for(int i=M+N;i>=M;i--)
		a[i]=a[i-M];
	for(int i=1;i<=M;i++)
		a[i]=a[i+N];
	for(int i=1;i<N;i++)
		cout<<a[i]<<" ";
	cout<<a[N]<<endl;
	
	return 0;
}
