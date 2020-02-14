#include <iostream>
using namespace std;

/*
1047 编程团体赛
本题核心：
枚举 
*/

int main(){
	int N;
	cin>>N;
	char c;
	int flag[1010]={0};
	int max_num=1;
	while(N--){
		string s;
		cin>>s;
		int crous;
		cin>>crous;
		int num=0;
		for(int i=0;s[i]!='-';i++)
			num=num*10+s[i]-'0';
		flag[num]+=crous;
		if(flag[num]>flag[max_num])
			max_num=num;
	}
	cout<<max_num<<" "<<flag[max_num];
	
	
	return 0;
}
