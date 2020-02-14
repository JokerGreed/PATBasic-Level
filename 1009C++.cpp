#include <iostream>
#include <cstring>
using namespace std;
string s[100];
/*
1009 说反话 
本题核心:
（1）如何判断字符串输入结束
（2）如何保证输出顺序 
*/
int main(){
	int ans=0;
	while(1){
		cin>>s[ans++];
		if(cin.get()=='\n')
			break;
	}

	for(int i=ans-1;i>0;i--)
		cout<<s[i]<<" ";
	cout<<s[0];
	
	return 0;
}
