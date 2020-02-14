#include <iostream>
using namespace std;

/*
1036 跟奥巴马一起编程
本题核心：
枚举各个行的情况 
*/

int main(){
	int N;
	char C;
	cin>>N>>C;
	int i,j;
	for(i=0;i<N;i++)
		cout<<C;
	cout<<endl;
	for(i=2;i<(N+1)/2;i++){
		for(j=0;j<N;j++)
			if(j==0||j==N-1)
				cout<<C;
			else
				cout<<" "; 
		cout<<endl;
	}
	for(i=0;i<N;i++)
		cout<<C;

	return 0;
}
