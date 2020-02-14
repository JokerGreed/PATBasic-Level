#include <iostream>
using namespace std;

/*
1081 ¼ì²éÃÜÂë
*/

int main(){
	int N;
	cin>>N; 
	while(N--){
		string s;
		getchar();
		getline(cin,s);
		if(s.length()<6){
			cout<<"Your password is tai duan le.\n";
			continue;
		}
		int fshuzi=0,fzimu=0,fluan=0;
		for(int i=0;i<s.length();i++){
			if(s[i]>='0'&&s[i]<='9')
				fshuzi=1;
			else if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
				fzimu=1;
			else if(s[i]!='.'){
				fluan=1;
				break;
			}
		}
		if(fluan)
			cout<<"Your password is tai luan le.\n";
		else if(fshuzi&&fzimu)
			cout<<"Your password is wan mei.\n";
		else if(!fshuzi)
			cout<<"Your password needs shu zi.\n";
		else if(!fzimu)
			cout<<"Your password needs zi mu.\n";
	}
	
	return 0;
}
