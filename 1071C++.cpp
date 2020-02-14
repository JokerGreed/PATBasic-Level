#include <iostream>
using namespace std;
/*
1071 Ð¡¶ÄâùÇé
*/ 
int main(){
	int T,K;
	cin>>T>>K;
	int n1,b,t,n2;
	while(K--){
		cin>>n1>>b>>t>>n2;
		int cnt;
		if(T==0){
			cout<<"Game Over.\n";
			break;
		} 
		if(t>T){
			printf("Not enough tokens.  Total = %d.\n",T);
//			cout<<"Not enough tokens. Total = "<<T<<".\n";
			continue;
		}
		if(n1<n2)
			cnt=1;
		else
			cnt=0;
		if(cnt==b){
			T+=t;
			printf("Win %d!  Total = %d.\n",t,T);
		}
		else{
			T-=t;
			printf("Lose %d.  Total = %d.\n",t,T);
		}
		
	}
	return 0;
}
