#include <iostream>
using namespace std;
/*
1011 A+B �� C
������ģ�
A+B�ĺͻ���ܻ���ɳ���int�ķ�Χ������ȡC-A<B����A,B,CΪlong int 
*/
int main(){
	int A,B,C;
	int T;
	cin>>T;
	for(int i=1;i<=T;i++){
		cin>>A>>B>>C; 
		if(C-A<B)
			cout<<"Case #"<<i<<": true\n";
		else
			cout<<"Case #"<<i<<": false\n";
	}
	return 0;
} 
