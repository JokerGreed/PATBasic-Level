#include <iostream>
#include <cstring>
using namespace std;
/*
1014 福尔摩斯的约会
本题核心：
（1）两位整数输出
（2）模型建立 
*/
int main(){
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int len1=s1.length(),len2=s2.length(),len3=s3.length(),len4=s4.length();
	int i,flag;
	string day[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	for(i=0,flag=0;i<min(len1,len2);i++){
		if(s1[i]==s2[i]){
			if(flag==0&&s1[i]>='A'&&s1[i]<='G'){
				cout<<day[s1[i]-'A'];
				flag=1;

			}
			else if(flag==1){
				if(s1[i]>='0'&&s1[i]<='9'){
					printf(" %02d:",s1[i]-'0');
					break;
				}
				if(s1[i]>='A'&&s1[i]<='N'){
					printf(" %02d:",s1[i]-'A'+10);
					break;
				}
			}
		}
	}
	for(i=0;i<min(len3,len4);i++){
		if(s3[i]==s4[i]) 
			if((s3[i]>='a'&&s3[i]<='z')||(s3[i]>='A'&&s3[i]<='Z')){
				printf("%02d\n",i);
				break;
		}
	}	
	return 0;
}
