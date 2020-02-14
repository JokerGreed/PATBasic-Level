#include <iostream>
using namespace std;
/*
1010 一元多项式求导
本题核心
（1）求导方法
（2）0 0情况的判断条件 
*/
int main(){
	int a,b;
	int flag=0;
	while(cin>>a>>b){
		if(flag==0&&b==0){
			cout<<"0 0"<<endl;
			break;
		}
		if(b!=0){
			if(flag==1)
				cout<<" ";
			cout<<a*b<<" "<<b-1;
			flag=1;
		}
		else{
			break;
		}
	}
	
	return 0;
} 
