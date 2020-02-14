#include <iostream>
#include <cstring>
using namespace std;

/*
1043 输出PATest 
本题核心：枚举 
*/

int main(){
	char s[10010];
	cin>>s;
	int len=strlen(s);
	int flag[150];
	int ans=0;
	memset(flag,0,sizeof(flag));
	for(int i=0;i<len;i++){
		if(s[i]=='P'||s[i]=='A'||s[i]=='T'||s[i]=='t'||s[i]=='e'||s[i]=='s'){
			flag[s[i]]++;
			ans++;
		}
	}
	while(ans>0){
		if(flag['P']){
			ans--;
			flag['P']--;
			cout<<"P";
		}
		if(flag['A']){
			cout<<"A";
			ans--;
			flag['A']--;
		}
		if(flag['T']){
			cout<<"T";
			ans--;
			flag['T']--;
		}
		if(flag['e']){
			cout<<"e";
			ans--;
			flag['e']--;
		}
		if(flag['s']){
			cout<<"s";
			ans--;
			flag['s']--;
		}
		if(flag['t']){
			cout<<"t";
			ans--;
			flag['t']--;
		}
	}
	
	return 0;
}

