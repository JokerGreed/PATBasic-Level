#include <iostream>
#include <cstring>
using namespace std;
/*
1029 �ɼ���
������ģ�
��1�������ظ����
��2���ַ���֮��ıȽ� 
*/
#define MAXN 88
int main(){
	
	char s1[MAXN],s2[MAXN];
	char put[MAXN];
	int flag[300]={0};
	int len1=0,len2=0;
	cin>>s1;
	len1=strlen(s1);
	cin>>s2;
	len2=strlen(s2);
	int ans=0;
	int i,j;
	for(i=0;i<len2;i++){
		for(j=i+ans;j<len1;j++){
			if(s1[j]!=s2[i]){
				if(s1[j]>='a'&&s1[j]<='z')
					s1[j]=s1[j]-'a'+'A';
				put[ans]=s1[j];
				ans++;
			}
			else
				break;
		}
	}
	for(j++;j<len1;j++){
		if(s1[j]>='a'&&s1[j]<='z')
				s1[j]=s1[j]-'a'+'A';
		put[ans]=s1[j];
		ans++;
	}
	for(i=0;i<ans;i++){
		if(flag[put[i]]==0){
			cout<<put[i];
			flag[put[i]]=1;
		}
	}
	
	return 0;
}
