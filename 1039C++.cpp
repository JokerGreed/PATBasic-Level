#include <iostream>
#include <cstring> 
using namespace std;

/*
1039 到底买不买
本题核心：
枚举
*/ 

int main(){
	int flag[150]={0};
	char s[1010];
	memset(s,0,sizeof(s));
	cin>>s;
	int len1=strlen(s);
	for(int i=0;i<len1;i++)
		flag[s[i]]++;
	memset(s,0,sizeof(s));
	cin>>s;
	int len2=strlen(s);
	for(int i=0;i<len2;i++)
		flag[s[i]]--;
	int ans=0;
	for(int i=0;i<150;i++){
		if(flag[i]<0)
			ans-=flag[i];
	}
	if(ans>0)
		cout<<"No "<<ans;
	else
		cout<<"Yes "<<len1-len2;
	
	return 0;
}
