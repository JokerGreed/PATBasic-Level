#include <iostream>
using namespace std;
/*
1026 程序运行时间
本题核心：
（1）时间单位进率
（2）四舍五入的处理 
*/ 
#define clk_tck 100
int main(){
	int c2,c1;
	int hh,mm,ss;
	cin>>c1>>c2;
	int c;
	c=(c2-c1+50)/clk_tck;
	hh=c/3600;
	mm=c%3600/60;
	ss=c%3600%60;
	printf("%02d:%02d:%02d",hh,mm,ss);
	
	return 0;
}
