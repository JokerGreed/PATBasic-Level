#include <iostream>
using namespace std;

/*
1078 ×Ö·û´®Ñ¹ËõÓë½âÑ¹
*/

int main(){
	char c;
	cin>>c;
	char a[1010];
	int count=0;
	int cnt=0;
	string s;
	getchar();
	getline(cin,s);
	if(c=='C'){
		for(int i=0,num=0;s[i]!='\0';i++)
		{
			c=s[i];
			
			if(c==s[i+1])
				num++;
			else
			{
				if(num==0)
				{
					cout<<c;
					num=0;
				}
				else
				{
					cout<<num+1<<c;
					num=0;
				}
			}
		}
	}
	else if(c=='D'){
		int i=0,num=0;
		while(s[i]!='\0')
		{
			
			if(s[i]>='0'&&s[i]<='9')
				num=num*10+(s[i]-'0');
			else
			{
				if(num==0)
					cout<<s[i];
				else
					for(int j=0;j<num;j++)
						cout<<s[i];
				num=0;
			}
			i++;
		}
	}
	return 0;
}
