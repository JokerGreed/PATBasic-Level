#include <iostream>
using namespace std;
/*
1017 A除以B
本题核心：
（1）只能用char或string来存储A
（2）因为B为一位数，可以逐步做除法
（3）当A仅有一位的特殊情况 
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
