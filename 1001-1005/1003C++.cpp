#include <iostream>
#include <cstring>
using namespace std;

/*
������ģ�
��1��PAT��ʽ��Ĺ��ɣ�ֻ��һ��P��T����PǰA��PT֮��A�ĳ˻�ΪT��A
��2�� P��A��T������֮��ļ���
��3���ַ������ж� 
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
