#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
1079 延迟的回文数
*/
 
int main(){
	string s1,s2,s3;	cin>>s1;
	int cnt=0,jinwei=0;
	for(cnt;cnt<10;cnt++){
		s2=s1;	//s2存储原来的 
		s3=s1;
		reverse(s1.begin() ,s1.end());	//s1逆转 
		if(s2==s1){
			cout<<s1<<" is a palindromic number.";
			break;
		}
		for(int j=0;j<s1.length() ;j++){
			s3[j]=(s1[j]-'0'+s2[j]-'0'+jinwei)%10+'0';    //从0位置开始加
			jinwei=(s1[j]-'0'+s2[j]-'0'+jinwei)/10;
		}
		reverse(s3.begin() ,s3.end() );    //加完之后要反转，将高位放在s3[0]处
		if(jinwei>0) s3='1'+s3;    //有进位则在字符串前面加1
		cout<<s2<<" + "<<s1<<" = "<<s3<<endl;
		s1=s3;
		jinwei=0;    //别忘了进位归零
	}
	if(cnt==10)	 cout << "Not found in 10 iterations.\n";
	return 0;
}
