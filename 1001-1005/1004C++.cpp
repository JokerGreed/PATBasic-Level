#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

/*
������ģ�
��1���ṹ�����ʵ������
��2�����ü򵥵ıȽϣ���λ������С 
*/ 

struct Student{
	string name;
	string num;
	int crous;
}stu[110];

bool operator <(const Student &s1,const Student &s2){
	return s1.crous<s2.crous;
} 

int main(){
	int n;
	cin>>n;
	int max=n-1;
	while(n){
		n--;
		cin>>stu[n].name;
		cin>>stu[n].num;
		cin>>stu[n].crous;
	}
	sort(stu,stu+max+1);
	
	cout<<stu[max].name<<" "<<stu[max].num<<endl;
	cout<<stu[0].name<<" "<<stu[0].num<<endl;
	
	return 0;
}
