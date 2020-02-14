#include <iostream>
using namespace std;

/*
1053 住房空置率
本题核心：
（1）什么是“空置”
（2）什么是“可能空置” 
*/

int main(){
	double N,D;
	double e;
	cin>>N>>e>>D;
	int flag=0,flag0=0;
	for(int j=0;j<N;j++){
		int K;
		cin>>K;
		int ans_day=0;
		double ans_e;
		for(int i=0;i<K;i++){
			cin>>ans_e;
			if(ans_e<e)
				ans_day++;
		}
		if(ans_day>K/2){
//			cout<<j+1<<endl;
			if(K>D)
				flag++;
			else
				flag0++;
		}
	}
	printf("%.1lf%% %.1lf%%",flag0/N*100,flag/N*100);
	
	return 0;
} 
