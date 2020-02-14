#include <iostream>
using namespace std;

/*
1016 部分A+B
本题核心：
A->DA的转换过程 
*/

int num(int a,int da){
	int ans=0;
	while(a/10!=0){
		if(a%10==da)
			ans=10*ans+da;
		a=a/10;
	}
	if(a==da)
		ans=ans*10+da;
	return ans;
}

int main(){
	int a,da,b,db;
	cin>>a>>da>>b>>db;
	int pa,pb;	
	pa=num(a,da);
	pb=num(b,db);
	cout<<pa+pb<<endl;
	return 0;
}
