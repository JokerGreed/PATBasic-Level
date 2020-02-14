#include <iostream>
using namespace std;

/*
1076 WifiÃÜÂë
*/

int main(){
	int N;
	cin>>N;
	int str[101],count=0; 
	char a,b;
	while(N--){
		int num;
		for(int i=0;i<4;i++){
			scanf(" %c-%c",&a,&b);
			if(b=='T')
				num=a-'A'+1;
		}
		str[count++]=num;
	}
	for(int i=0;i<count;i++)
		cout<<str[i];
	cout<<endl;
	
	return 0;
}
