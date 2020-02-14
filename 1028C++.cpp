#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
/*
1028 人口普查
本题核心：
（1）出生日期排序
（2）出生日期与年龄上下限的比较
（3）当ans为0的情况 
*/
struct people{
	string name;
	string birthday;
};

bool cmp(people a,people b){
	int len=a.birthday.length();
	for(int i=0;i<len;i++){
		if(a.birthday[i]-b.birthday[i]!=0)
			if(a.birthday[i]-b.birthday[i]>0)
				return false;
			else
				return true;
	}
	return true;
}
bool cmp1(string a,string b){
	int len=a.length();
	for(int i=0;i<len;i++){
		if(a[i]!=b[i])
			if(a[i]-b[i]>0)
				return false;
			else
				return true;
	}
	return true;
}

int main(){
	int N;
	cin>>N;
	people p[100100];
	string maxage="1814/09/06";
	string minage="2014/09/06";
	for(int i=0;i<N;i++){
		cin>>p[i].name;
		cin>>p[i].birthday;
	}
	sort(p,p+N,cmp);

	int ans=N;
	for(int i=0;i<N;i++){
		if(!cmp1(maxage,p[i].birthday))
			ans--;
		else{
			maxage=p[i].name;
			break;
		}
	}
	for(int i=N-1;i>=0;i--){
		if(!cmp1(p[i].birthday,minage))
			ans--;
		else{
			minage=p[i].name;
			break;
		}
	}
	if(ans==0)
		cout<<ans;
	else
		cout<<ans<<" "<<maxage<<" "<<minage;
	return 0;
}
