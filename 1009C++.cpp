#include <iostream>
#include <cstring>
using namespace std;
string s[100];
/*
1009 ˵���� 
�������:
��1������ж��ַ����������
��2����α�֤���˳�� 
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
