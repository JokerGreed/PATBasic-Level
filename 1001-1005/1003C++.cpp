#include <iostream>
#include <cstring>
using namespace std;

/*
本题核心：
（1）PAT格式间的规律，只有一个P和T，且P前A与PT之间A的乘积为T后A
（2） P，A，T，三者之间的计数
（3）字符串的判断 
*/

bool judge(string s){
	int numP=0,numT=0,numA[3]={0};
	int len=s.length();

	for(int i=0;i<len;i++){
		if(s[i]!='P'&&s[i]!='A'&&s[i]!='T')
			return false;
		if(s[i]=='P'){
			numP++;
			if(numP>1||numT!=0)
				return false;
		}
		if(s[i]=='T'){
			numT++;
			if(numT>1||numP==0)
				return false;
		}
		if(s[i]=='A'){
			if(numP==0&&numT==0)
				numA[0]++;
			if(numP!=0&&numT==0)
				numA[1]++;
			if(numP!=0&&numT!=0)
				numA[2]++;
		}
	}
	if(numP==0||numA[1]==0||numT==0)
		return false;
	if(numA[1]*numA[0]==numA[2])
		return true;
	else
		return false;
	
}

int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		cin>>s;
		if(judge(s))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	return 0;
}
