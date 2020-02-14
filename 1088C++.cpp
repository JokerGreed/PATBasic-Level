#include  <iostream>
#include <cmath>
using namespace std;

/*
1088 ÈıÈËĞĞ
*/

int M;
void print(int a){
	if(a==M)
		cout<<" Ping";
	else if(a>M)
		cout<<" Cong";
	else
		cout<<" Gai";
}

int main(){
	int X,Y;
	cin>>M>>X>>Y;
	int jia,yi;
	double bing;
	for(int i=99;i>=10;i--){
		jia=i;
		yi=jia%10*10+jia/10;
		bing=abs(jia-yi)/X;
		if(bing*Y==yi){
			cout<<jia;
			print(jia);
			print(yi);
			print(bing);
			return 0;
		}
	}
	cout<<"No Solution";
	
	
	
	return 0;
}
