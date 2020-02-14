#include <iostream>
using namespace std;
/*
1006 换个格式输出整数 

本题核心：
（1）个十百的数值求取
（2）判断n有几位数 
*/


int main(){
	int n;
	cin>>n;
	int bai,shi,ge;
	bai=n/100;
	shi=n%100/10;
	ge=n%10;
	int i;
	if(bai!=0){
		for(i=0;i<bai;i++)
			cout<<"B";
		for(i=0;i<shi;i++)
			cout<<"S";
		for(i=0;i<ge;i++)
			cout<<i+1;
		cout<<endl;
	}
	else if(shi!=0){
		for(i=0;i<shi;i++)
			cout<<"S";
		for(i=0;i<ge;i++)
			cout<<i+1;
		cout<<endl;
	}
	else{
		for(i=0;i<ge;i++)
			cout<<i+1;
		cout<<endl;
	}
	return 0;
}
