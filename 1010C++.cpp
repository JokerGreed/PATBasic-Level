#include <iostream>
using namespace std;
/*
1010 һԪ����ʽ��
�������
��1���󵼷���
��2��0 0������ж����� 
*/
int main(){
	int a,b;
	int flag=0;
	while(cin>>a>>b){
		if(flag==0&&b==0){
			cout<<"0 0"<<endl;
			break;
		}
		if(b!=0){
			if(flag==1)
				cout<<" ";
			cout<<a*b<<" "<<b-1;
			flag=1;
		}
		else{
			break;
		}
	}
	
	return 0;
} 
