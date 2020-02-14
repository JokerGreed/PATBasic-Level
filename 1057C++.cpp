#include <iostream>
using namespace std;

/*
1057 数零壹
本题核心：
（1）如何记录字符串s，字符串s中含空格
（2）如何统计字符
（3）二进制 
*/

int main(){
	string s;
	getline(cin,s);
	int sum=0;
//	cout<<s<<endl; 
	for(int i=0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z')
			s[i]=s[i]-'A'+'a';
		if(s[i]>='a'&&s[i]<='z')
			sum+=s[i]-'a'+1;	
	}
//	cout<<sum;
	int flag0=0,flag1=0;
	while(sum!=0){
		if(sum%2)
			flag1++;
		else
			flag0++;
		sum/=2;
	}
	cout<<flag0<<" "<<flag1;
	
	return 0;
} 
