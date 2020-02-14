#include <iostream>
#include <algorithm>
using namespace std;

/*
1060 爱丁顿数
本题核心：
爱丁顿数求取 
*/

bool cmp(int a,int b){
	return a>b;
}

	int N;
	cin>>N; 
	int E[100100]={0};
	for(int i=0;i<N;i++)
		cin>>E[i];
	sort(E,E+N,cmp);
//	for(int i=0;i<N;i++)
//		cout<<E[i]<<" ";
	

	if(E[N-1]>N)
		cout<<N;
	else
		for(int i=0;i<N;i++)
			if(E[i]<=i+1){
				cout<<i;
				return 0;
			}
			
	
	return 0;
}
