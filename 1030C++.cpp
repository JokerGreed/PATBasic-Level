#include <iostream>
#include <algorithm>
using namespace std;

/*
1030 ��������
������ģ�
��1����Χ��p������numNҪ��Long int ����
��2��ʱ�临�Ӷȣ��õ���������ʱ�临�Ӷȣ����װ�Ķ��飩 
*/

int main(){
	int N;
	long int p;
	long int numN[100010];
	cin>>N>>p;
	int i,j;
	for(i=0;i<N;i++)
		cin>>numN[i];
	sort(numN,numN+N); 	
	int ans=0;
	for(i=0;i<N;i++){
		for(j=ans+i;j<N;j++){
			if(numN[j]>numN[i]*p)
				break;
			if(j-i+1>ans)
				ans=j-i+1;
		}
	}
	cout<<ans;
	
	return 0;
} 
