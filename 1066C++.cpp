#include <iostream>
using namespace std; 
/*
1066 ͼ�����
*/ 

int main(){
	int M,N;
	int A,B,change;
	cin>>M>>N>>A>>B>>change;
	int S;
	int i,j;
	for(i=0;i<M;i++)
		for(j=0;j<N;j++){
			scanf("%d",&S);//cinͨ���� 
			if(A<=S&&S<=B)
				S=change;
			printf("%03d%c",S,j==N-1?'\n':' ');
		}
	
	return 0;
}
