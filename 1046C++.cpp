#include <iostream>
using namespace std;

/*
1046 划拳
本题核心
枚举
搞清楚什么条件喝酒 
*/

int main(){
	int N;
	cin>>N; 
	int ansJ=0;
	int ansY=0;
	while(N--){
		int hanJ,huaJ,hanY,huaY;
		cin>>hanJ>>huaJ>>hanY>>huaY;
		if(huaJ!=huaY){
			if(huaJ==hanJ+hanY)
				ansY++;
			if(huaY==hanJ+hanY)
				ansJ++;
		}
	}
	cout<<ansJ<<" "<<ansY;
	return 0;
} 
