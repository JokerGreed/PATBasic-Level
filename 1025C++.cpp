#include <iostream>
#include <algorithm>
using namespace std;

/*
1025 ·´×ªÁ´±í
*/ 

struct LNode{
	string address;
	int data;
	string next;
	int flag;
};
LNode L[100100];
bool cmp(LNode a,LNode b){
	if(a.flag<b.flag)
		return true;
	return false;
}



int main(){
	string begin; 
	int N;
	int K;
	cin>>begin>>N>>K;
	for(int i=0;i<N;i++){
		cin>>L[i].address;
		cin>>L[i].data;
		cin>>L[i].next;
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(begin==L[j].address){
				L[j].flag=i;
				begin=L[j].next;
			}	
		}
	}
	
	sort(L,L+N,cmp);
	for(int i=K-1;i>=0;){
		cout<<L[i].address;
		cout<<" "<<L[i].data<<" ";
		if(--i<0)
			cout<<L[K].address<<endl;
		else
			cout<<L[i].address<<endl;
	}
	for(int i=K;i<N;i++){
		cout<<L[i].address;
		cout<<" "<<L[i].data<<" ";
		cout<<L[i].next<<endl;
	}
	
	return 0;
}
