#include <iostream>
using namespace std;
/*
1017 A����B
������ģ�
��1��ֻ����char��string���洢A
��2����ΪBΪһλ����������������
��3����A����һλ��������� 
*/
int main(){
	char A[1010];
	cin>>A;
	int B,R;
	cin>>B;
	int Q[1010];
	int i=1,t;
	t=A[0]-'0';
	if(A[1]=='\0'){
		cout<<t/B;
		t=t%B;
	}
	while(A[i]!='\0'){
		t=t*10+A[i]-'0';
//		cout<<t<<endl;
		if(t>=B){
			cout<<t/B;//<<endl;
			t=t%B;
		}
		else
			cout<<0;
		i++;
	}
	R=t;
	cout<<" "<<R;
	return 0;
}
