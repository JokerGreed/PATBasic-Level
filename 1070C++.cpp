#include <iostream>
#include <algorithm>
using namespace std;

/*
1070 结绳
本题核心
如何实现最大长度及向下取整 
*/

int main(){
	int N;
	cin>>N;
	double a[10010];
	for(int i=0;i<N;i++)
		cin>>a[i];
	sort(a,a+N);
	for(int i=1;i<N;i++)
		a[i]=(a[i]+a[i-1])/2;
	cout<<(int)a[N-1]<<endl;
	
	return 0;
} 
