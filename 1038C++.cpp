#include <iostream>
using namespace std;
/*
1038 统计同成绩学生
本题核心
枚举 
*/ 
int main(){
	int N;
	cin>>N;
	int flag[110]={0};
	for(int i=0;i<N;i++){
		int crous;
		cin>>crous;
		flag[crous]++;
	}
	int K;
	cin>>K;
	for(int i=0;i<K;i++){
		int num;
		cin>>num;
		if(i+1==K)
			cout<<flag[num];
		else
			cout<<flag[num]<<" ";
	}
	return 0;
}
