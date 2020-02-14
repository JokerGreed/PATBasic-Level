#include <iostream>
using namespace std;

/*
1023 组个最小数
本题核心：
找到最小的打头数字（0除外）后，按大小依次输出所有数字 
*/ 

int main(){
	int d[10];
	for(int i=0;i<10;i++)
		cin>>d[i];

	for(int i=1;i<10;i++){
		if(d[i]!=0){
			d[i]--;
			cout<<i;
			break;
		}
	}
	for(int i=0;i<10;i++){
		while(d[i]){
			cout<<i;
			d[i]--;
		}
	}
	
	return 0;
} 
