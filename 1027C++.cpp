#include <iostream>
using namespace std;

/*
1027 ´òÓ¡É³Â©
*/

int main(){
	int N;
	char s;
	cin>>N>>s;
	int i,j,k;
	int sum=0,cnt=0;
	for(k=1;;k++){
		if(2*k*k-1>N){
			k--;
			cnt=N-2*k*k+1;
			break;
		}
	}
	for(i=k;i!=1;i--){
		for(j=0;j<(k-i);j++)
			cout<<" ";
		for(j=0;j<2*i-1;j++)
			cout<<s;
		cout<<endl;
	}
	for(i=1;i<=k;i++){
		for(j=0;j<(k-i);j++)
			cout<<" ";
		for(j=0;j<2*i-1;j++)
			cout<<s;
		cout<<endl;
	}
	cout<<cnt;
	return 0;
}
