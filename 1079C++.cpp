#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

/*
1079 �ӳٵĻ�����
*/
 
int main(){
	string s1,s2,s3;	cin>>s1;
	int cnt=0,jinwei=0;
	for(cnt;cnt<10;cnt++){
		s2=s1;	//s2�洢ԭ���� 
		s3=s1;
		reverse(s1.begin() ,s1.end());	//s1��ת 
		if(s2==s1){
			cout<<s1<<" is a palindromic number.";
			break;
		}
		for(int j=0;j<s1.length() ;j++){
			s3[j]=(s1[j]-'0'+s2[j]-'0'+jinwei)%10+'0';    //��0λ�ÿ�ʼ��
			jinwei=(s1[j]-'0'+s2[j]-'0'+jinwei)/10;
		}
		reverse(s3.begin() ,s3.end() );    //����֮��Ҫ��ת������λ����s3[0]��
		if(jinwei>0) s3='1'+s3;    //�н�λ�����ַ���ǰ���1
		cout<<s2<<" + "<<s1<<" = "<<s3<<endl;
		s1=s3;
		jinwei=0;    //�����˽�λ����
	}
	if(cnt==10)	 cout << "Not found in 10 iterations.\n";
	return 0;
}
