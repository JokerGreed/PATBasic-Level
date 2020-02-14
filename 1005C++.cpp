
#include <iostream>
#include <cstring> 
#include <algorithm> 
using namespace std;

/*
1005 ����(3n+1)���� 
������ģ�
��1����¼ÿ��3n+1�����ִ�й���
��2������ҵ��ؼ���
��3��ע��ؼ��ֵ������ʽ 
*/

int flag[10000];

int main(){
	int k,n[101],a[101];
	memset(n,0,sizeof(n));
	memset(flag,0,sizeof(flag));
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>n[i];
		a[i]=n[i];
		while(n[i]!=1){
			flag[n[i]]++;
			if(n[i]%2==0)
				n[i]=n[i]/2;
			else
				n[i]=(3*n[i]+1)/2;
		}
	}
	
	sort(a,a+k);

	
	for(int i=k-1,flag_0=0;i>=0;i--){
		if(flag[a[i]]==1)
			if(flag_0==0){
				cout<<a[i];
				flag_0=1;
			}
			else
				cout<<" "<<a[i];
	}
	cout<<endl;
	
	return 0;
}
