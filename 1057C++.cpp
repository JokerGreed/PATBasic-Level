#include <iostream>
using namespace std;

/*
1057 ����Ҽ
������ģ�
��1����μ�¼�ַ���s���ַ���s�к��ո�
��2�����ͳ���ַ�
��3�������� 
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
