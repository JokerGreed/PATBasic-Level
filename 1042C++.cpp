#include <iostream>
#include <cstring>
using namespace std;

/*
1042 �ַ�ͳ��
������ģ�
ö�ٺ��ַ����루���ո� 
*/

int main(){
	char c;
	int flag[150]={0};
	int maxc=0;
	while((c=getchar())!='\n'){
		if(c>='A'&&c<='Z')
			flag[c-'A'+'a']++;
		if(c>='a'&&c<='z')
			flag[c]++;
	}
	for(int i='a';i<='z';i++)
		if(maxc<flag[i]){		
			maxc=flag[i];
			c=i;
		}
	cout<<c<<" "<<maxc;
		
	
	return 0;
}
