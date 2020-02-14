#include <iostream>
using namespace std;
/*
1020 月饼
本题核心：
（1）N长度为1000，不能用int
（2）如何统计0-9出现的个数 
*/ 
int main(){
	string N;
	cin>>N;
	int d[10]={0};
	int len=N.length();
	for(int i=0;i<len;i++)
		d[N[i]-'0']++;
	
	for(int i=0;i<10;i++){
		if(d[i]!=0)
			cout<<i<<":"<<d[i]<<endl;
	}
	return 0;
}
