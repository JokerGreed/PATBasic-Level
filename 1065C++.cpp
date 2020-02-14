#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

/*
1065 单身狗
本题核心：
（1）情侣的处理
（2）编号00000的处理 
*/

#define MAXN 100100
queue <int> q; 
int main(){
	int people[MAXN]={-1};
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int a,b;
		cin>>a>>b;
		people[a]=b;
		people[b]=a;
	}
	int M;
	cin>>M;
	int m_ID[MAXN]={0},flag[MAXN]={0};
	for(int i=0;i<M;i++){
		cin>>m_ID[i];
		flag[m_ID[i]]=1;
	}
	sort(m_ID,m_ID+M);
	for(int i=0;i<M;i++){
		
		if(people[m_ID[i]]==-1||!flag[people[m_ID[i]]])
			q.push(m_ID[i]);
	}
	cout<<q.size()<<endl;
	int f=0;
	while(!q.empty()){
		if(f==0)
			printf("%05d",q.front());
		else
			printf(" %05d",q.front());
		f=1;
		q.pop();
	}

	return 0;
}
