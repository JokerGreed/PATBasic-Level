#include  <iostream>
using namespace std;

/*
1037 在霍格沃茨找零钱
本题核心：
枚举 
*/

int main(){
	int G0,S0,K0;
	scanf("%d.%d.%d",&G0,&S0,&K0);
	int G1,S1,K1;
	scanf("%d.%d.%d",&G1,&S1,&K1);
	int G2,S2,K2;
	int flagk=0,flags=0;
	if(K1-K0>=0)
		K2=K1-K0;
	else{
		flagk=1;
		K2=K1+29-K0;
	}
	if(flagk==0){
		if(S1-S0>=0)
			S2=S1-S0;
		else{
			flags=1;
			S2=S1+17-S0;
		}
	}
	else{
		if(S1-S0-1>=0)
			S2=S1-S0-1;
		else{
			flags=1;
			S2=S1+17-S0-1;

		}
	}
	if(flags==0){
		if(G1-G0>=0)
			G2=G1-G0;
		else{
			G2=G1-G0+1;
			S2=16-S2;
			K2=29-K2;

		}
	}
	else{
		if(G1-G0-1>=0){
			G2=G1-G0-1;
		}
		else{
			G2=G1-G0;
			S2=16-S2;
			K2=29-K2;
	
		}
	}
	
	cout<<G2<<"."<<S2<<"."<<K2;
	 
	return 0;
}
