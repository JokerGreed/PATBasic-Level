#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

/*
1015 德才论
本题核心：
（1）分类方式
（2）排序方式 
*/

struct student{
	char num[10];
	int de_crous;
	int cai_crous;
	int crous;
	int sort_flag;
}stu[100010];

bool operator <(const student &a,const student &b){
	if(a.sort_flag==b.sort_flag)
		if(a.crous==b.crous)
			if(a.de_crous==b.de_crous)
				return strcmp(a.num,b.num)>0;
			else
				return a.de_crous<b.de_crous;
		else
			return a.crous<b.crous;
	else
		return a.sort_flag<b.sort_flag;
}

int main(){
	int N,L,H;
	cin>>N>>L>>H;
	int i,ans=N;
	for(i=0;i<N;i++){
		cin>>stu[i].num;
		cin>>stu[i].de_crous;
		cin>>stu[i].cai_crous;
		stu[i].crous=stu[i].de_crous+stu[i].cai_crous;
		if(L>stu[i].de_crous||L>stu[i].cai_crous){
			stu[i].sort_flag=0;
			ans--;
		}
		else if(stu[i].de_crous<H){
			if(stu[i].cai_crous>stu[i].de_crous)
				stu[i].sort_flag=1;
			else
				stu[i].sort_flag=2;
		}
		else if(stu[i].de_crous>=H){
			if(stu[i].cai_crous<H)
				stu[i].sort_flag=3;
			else
				stu[i].sort_flag=4;
		}
	}
	
	sort(stu,stu+N);
	
	cout<<ans<<endl;
	for(i=N-1;i>=0;i--){
		if(stu[i].sort_flag==0)
			break;
		cout<<stu[i].num<<" "<<stu[i].de_crous<<" "<<stu[i].cai_crous<<endl;
	} 
	
	return 0;
}
