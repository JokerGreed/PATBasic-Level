#include <iostream>
using namespace std;

/*
1031 查验身份证
本题核心：
（1）理解权重
（2）枚举 
*/

int main(){
	int N;
	cin>>N;
	int w[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char change[15]={'1','0','X','9','8','7','6','5','4','3','2'};
	bool flag=true;
	
	while(N--){
		char s[20];
		cin>>s;
		int ans=0;
		int i;
		for(i=0;i<17;i++){
			if(s[i]>='0'&&s[i]<='9')
				ans=ans+(s[i]-'0')*w[i];
			else
				break;
		}
		if(i<17){
			flag=false;
				cout<<s<<endl;
		}
		else{
			if(change[ans%11]!=s[17]){
				flag=false;
				cout<<s<<endl;
			}
		}
	}
	if(flag)
		cout<<"All passed"; 
	
	return 0;
}
