#include <iostream>
using namespace std;

/*
1086 ¾Í²»¸æËßÄã
*/

int main(){
	int A,B;
	cin>>A>>B;
	A=A*B;
	char num[15]={'\0'};
	int ans=0;
	while(A/10){
		num[ans]=A%10+'0';
		ans++;
		A/=10;
	}
	num[ans++]=A+'0';
	for(int i=0,f=0;i<ans;i++){
		if(num[i]!='0')
			f=1;
		if(f)
			cout<<num[i];
	}
	return 0;	
}
