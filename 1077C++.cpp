#include <iostream>
using namespace std;

/*
1077 »¥ÆÀ³É¼¨¼ÆËã
*/

int main(){
	int N,M;
	cin>>N>>M;
	int maxs,mins;
	int G2,G1,G;
	for(int i=0;i<N;i++){
		cin>>G2;
		G1=0;
		maxs=0,mins=M;
		int cnt=0;
		for(int j=1;j<N;j++){
			int num;
			cin>>num;
			if(num>=0&&num<=M){
				G1+=num;
				maxs=max(num,maxs);
				mins=min(num,mins);
				cnt++;
			}
		}
		G1=(G1-maxs-mins)/(cnt-2);
		G=(G1+G2+1)/2;
		cout<<G<<endl;
	}
	
	return 0;
} 
