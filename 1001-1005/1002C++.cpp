#include <iostream>
#include <cstring>
using namespace std;

string s[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

int main(){
	string n;
	cin>>n;
	int num=0;
	int len=n.length();
	for(int i=0;i<len;i++)
		num+=n[i]-'0';
	if(num/100!=0)
		cout<<s[num/100]<<" "<<s[num%100/10]<<" "<<s[num%10]<<endl;
	else if(num/10!=0)
		cout<<s[num/10]<<" "<<s[num%10]<<endl;
	else
		cout<<s[num]<<endl;
	return 0;
}
