#include <iostream>
#include <algorithm>
using namespace std;

/*
1041 ������λ��
������ģ�
��1������ 
��2������ 
*/

struct student{
	char num1[17];
	int num2;//�Ի���λ�� 
	int num3;//������λ�� 
}; 

bool cmp(student a,student b){
	return a.num2<b.num2;
}

int main(){
	int N;
	cin>>N;
	student s[1010];
	for(int i=0;i<N;i++){
		cin>>s[i].num1;
		cin>>s[i].num2;
		cin>>s[i].num3;
	}
	sort(s,s+N,cmp);
	int M;
	cin>>M;
	while(M--){
		int numm;
		cin>>numm;
		cout<<s[numm-1].num1<<" "<<s[numm-1].num3<<endl;
	}
	
	return 0;
}
