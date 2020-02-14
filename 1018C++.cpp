#include <iostream>
#include <cstring>
using namespace std;
/*
1018 锤子剪刀布
本题核心
枚举，逐步计算 
*/

int win(char a,char b){
	if(a==b)
		return 0;//0是平 
	if(a=='C'&&b=='J')
		return 1;//1是赢
	if(a=='J'&&b=='B')
		return 1;
	if(a=='B'&&b=='C')
		return 1;
	return -1;//-1是输 
}

char temp(int a){
	if(a==0)
		return 'B';
	else if(a==1)
		return 'C';
	else
		return 'J';
}
int sum(int a,int b[]){
	if(a=='B')
		b[0]++;
	if(a=='C')
		b[1]++;
	if(a=='J')
		b[2]++;
}

int main(){
	int N;
	cin>>N;
	int num=N;
	char A,B;
	int ansA=0,ansB=0;
	int cntA[3],cntB[3];
	memset(cntA,0,sizeof(cntA));
	memset(cntB,0,sizeof(cntB));
	while(N--){
		cin>>A>>B;
		if(win(A,B)==1){
			ansA++;
			sum(A,cntA);
		}
		else if(win(B,A)==1){
			ansB++;
			sum(B,cntB);
		}
	}
	cout<<ansA<<" "<<num-ansA-ansB<<" "<<ansB<<endl;
	cout<<ansB<<" "<<num-ansA-ansB<<" "<<ansA<<endl;
	int maxA=0,maxB=0;
	for(int i=1;i<3;i++){
		if(cntA[maxA]<cntA[i])
			maxA=i;
		if(cntB[maxB]<cntB[i])
			maxB=i;
	}
	
	cout<<temp(maxA)<<" "<<temp(maxB);
	return 0;
}
