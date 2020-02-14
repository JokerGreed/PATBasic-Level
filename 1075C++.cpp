#include <iostream>
#include <queue>
using namespace std;

/*
1075 链表元素分类
*/ 

struct Lnode{
	int data;
	int next;
};
bool cmp(Lnode a,Lnode b){
	return a.data<b.data;
}

int main(){
	int start;
	int N;
	int K;
	cin>>start>>N>>K;
	Lnode L[100010];
	for(int i=0;i<N;i++){
		int adr;
		cin>>adr;
		cin>>L[adr].data;
		cin>>L[adr].next;
	}
	queue <int> s0;//负数 
	queue <int> s1;//小于K 
	queue <int> s2;//大于K 
	int adr=start;
	while(adr!=-1){
		if(L[adr].data<0)
			s0.push(adr);
		else if(L[adr].data<=K)
			s1.push(adr);
		else
			s2.push(adr);
		adr=L[adr].next;
	}
	int flag=0;
	while(!s0.empty()){
		adr=s0.front();
		if(flag)
			printf("%05d\n",adr);
		else
			flag=1;
		printf("%05d %d ",adr,L[adr].data);
		s0.pop();
	}
	while(!s1.empty()){
		adr=s1.front();
		if(flag)
			printf("%05d\n",adr);
		else
			flag=1;
		printf("%05d %d ",adr,L[adr].data);
		s1.pop();
	}
	while(!s2.empty()){
		adr=s2.front();
		if(flag)
			printf("%05d\n",adr);
		else
			flag=1;
		printf("%05d %d ",adr,L[adr].data);
		s2.pop();
	}
	cout<<"-1"<<endl;
	return 0;
} 
