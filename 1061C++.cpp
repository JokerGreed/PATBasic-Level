#include <iostream>
using namespace std;
/*
1061 ÅÐ¶ÏÌâ
*/

int main(){
	int N,M;
	cin>>N>>M;
	int scrous[105]={0};
	for(int i=0;i<M;i++)
		cin>>scrous[i];
	int istrue[105]={0};
	for(int i=0;i<M;i++)
		cin>>istrue[i];
	while(N--){
		int flag;
		int sum=0;
		for(int i=0;i<M;i++){
			cin>>flag;
			if(flag==istrue[i])
				sum+=scrous[i];
		}
		cout<<sum<<endl;
	}
	
	
	return 0;
}
