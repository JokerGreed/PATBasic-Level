#include <iostream>
using namespace std;
/*
1024 科学计数法
本题核心：
（1）科学计数A的处理
（2）数字部分+，-
（3）指数部分+，-
（4）整个数字正常输出时的长度 
*/

int main(){
	string A;
	cin>>A;
	int len=A.length();
	char num1[10100];
	int num,i,j,flag=0;
	if(A[0]=='-')
		cout<<"-";
	for(num=1;A[num]!='E';num++){
	}
	int cnt=0;
	for(j=num+2;j<len;j++)
		cnt=cnt*10+A[j]-'0';
	
	if(A[num+1]=='+'){
		if(num-3<=cnt){
			cout<<A[1];
			for(i=3;i<num;i++)
				cout<<A[i];
			for(i=i-2;i<=cnt;i++)
				cout<<"0";
		}
		else{
			cout<<A[1];
			for(i=3;i<cnt+3;i++)
				cout<<A[i];
			cout<<".";
			for(;i<num;i++)
				cout<<A[i];
		}
	}
	else{
		cout<<"0.";
		for(j=0;j<cnt-1;j++)
			cout<<"0";
		cout<<A[1];
		for(i=3;i<num;i++)
			cout<<A[i];
	}
	
	return 0;
}
