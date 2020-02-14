#include <iostream>
#include <cmath>
using namespace std;


/*
1007 �����Բ���
�������
��1���������ж�
��2��ȷ����Ҫͳ�Ƶ���ɶ 
*/ 
bool prime(int a){
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0)
			return false;
	
	return true;
}

int main(){
	int N;
	cin>>N;
	int ans=0;
	int p=2;
	for(int i=3;i<=N;i++){
		if(prime(i)){
			if(i-p==2)
				ans++;
			p=i;
		}
	}
	cout<<ans<<endl;
	return 0;
} 
