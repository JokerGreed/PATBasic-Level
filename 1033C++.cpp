#include <iostream>
#include <cstring>
using namespace std;

/*
1033 �ɼ��̴���
������ģ�
��1���ַ��ı��
��2�����ϵ�������ʱ����д�ַ��Ĵ��� 
*/

int main(){
	char  ch;
	int flag[150]={0};
	while((ch=getchar())!='\n'){
		flag[ch]=1;
		if(ch>='A'&&ch<='Z'){
			flag[ch-'A'+'a']=1;
		}
	}
	if(flag['+']==1){
		for(int i='A';i<='Z';i++)
			flag[i]=1;
	}

		
	while((ch=getchar())!='\n')
		if(flag[ch]==0)
			cout<<ch;
		
	
	return 0;
}
