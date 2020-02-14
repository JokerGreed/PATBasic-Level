#include <iostream>
#include <algorithm>
using namespace std;
/*
1020月饼 
本题核心
（1）贪心算法
（2）int与double 
*/ 
#define MAXN 1010
struct mooncake{
	double t;
	double value;
	double ans;
};
mooncake N_sort[MAXN];
bool operator <(const mooncake &a,const mooncake &b){
	return a.ans<b.ans;
}

int main(){
	int N,D;
	cin>>N>>D;
	for(int i=0;i<N;i++)
		cin>>N_sort[i].t;
		
	for(int i=0;i<N;i++)
		cin>>N_sort[i].value;
	for(int i=0;i<N;i++)
		N_sort[i].ans=N_sort[i].value/N_sort[i].t;
	sort(N_sort,N_sort+N);
	double total_value=0;
	
	while(D!=0){
		N--;
		if(D>=N_sort[N].t){
			D=D-N_sort[N].t;
			total_value+=N_sort[N].value;
		}
		else{
			total_value+=D*N_sort[N].ans;
			D=0;
		}
//		printf("%.2f",total_value);
		if(N==0)
			break;
	}
	printf("%.2f",total_value);
	
	return 0;
}
