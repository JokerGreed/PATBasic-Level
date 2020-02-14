#include <iostream>
#include <cmath> 
using namespace std;

/*
1063 计算谱半径
本题核心：
（1）谱半径计算公式 
（2）数据类型统一 
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
