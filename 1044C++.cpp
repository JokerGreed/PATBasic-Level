#include <iostream>
#include <cstring>
using namespace std;

/*
1044 »ðÐÇÊý×Ö
*/

int main(){
	int N;
	cin>>N;
	char ch1[15][5]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	char ch2[13][4]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};

	while(N--){
		char c;
		int num=0;
		char c1[10];
		int count=0;
		int flag=0;
		while((c=getchar())!='/n'){
			if(c>='0'&&c<='9'){
				num=num*10+c-'0';
				flag=1;
				cout<<num<<endl;
			}
			else{
				c1[count]=c;
				count++;
				flag=2;
			}
		}
		cout<<num<<endl;
		
		if(flag==1){
			int num1=0,num2=0;
			if(num/13==0){
				num1=num%13;
				cout<<ch1[num1]<<endl;
			}
			else{
				num2=num/13;
				num1=num%13;
				cout<<ch2[num2-1]<<" "<<ch1[num1]<<endl;
			}
		}
		if(flag==2){
			if(count<5){
				for(int i=0;i<14;i++){
					if(strcmp(ch1[i],c1)){
						cout<<i<<endl;
						break;
					}
				}
			}
			else{
				
			}
			
		}
		
	}
	
	
	return 0;
}
