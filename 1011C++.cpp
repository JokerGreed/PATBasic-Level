#include <iostream>
using namespace std;
/*
1011 A+B 和 C
本题核心：
A+B的和会可能会造成超出int的范围，所以取C-A<B或定义A,B,C为long int 
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
