#include <iostream>
using namespace std;

/*
1056 ������ĺ�
������ģ�
��1��ö�ٸ�������
��2��ע��2�������� 
*/

int main(){
	int N;
	cin>>N;
	int num[12]={0};
	for(int i=0,s;i<N;i++){
		cin>>s;
		num[s]=1;
	}
	int sum=0;
	for(int i=1;i<=10;i++)
		for(int j=1;j<=10;j++)
			if(i!=j&&num[i]&&num[j])
				sum+=10*i+j;
	
	cout<<sum<<endl;
	return 0;
}
