#include <iostream>
#include <cstring>
using namespace std;
/*
1008 数组元素循环右移问题
本题核心：
（1）可将元素组延长范围N+M
（2）注意M的取值可能会大于N 
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
