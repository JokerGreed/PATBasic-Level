#include <iostream>
#include <cstring>
using namespace std;

/*
1067 ÊÔÃÜÂë
*/

int main(){
	string m;
	int N;
	cin>>m>>N;
	string c;
	getchar();
	getline(cin,c);
	int count=0;
	while(1){
		count++;
		if(c=="#")
			break;
		if(N==0){
			cout<<"Account locked\n";
			break;
		}
		if(m==c){
			cout<<"Welcome in\n";
			break;
		} 
		else
			cout<<"Wrong password: "<<c<<endl;
		if(count==N){
			cout<<"Account locked\n";
			break;
		}
		getline(cin,c);
	}
	
	return 0;
}
