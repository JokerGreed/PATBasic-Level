#include <iostream>
using namespace std;

/*
1069 Î¢²©×ª·¢³é½±
*/

int M,N,S; 
string ID[1010];
int count=0;
bool isprime(string s){
	for(int i=0;i<count;i++)
		if(ID[i]==s)
			return false;
	
	return true;
}


int main(){
	cin>>M>>N>>S;
	int flag=0;
	for(int i=1;i<=M;i++){
		string name;
		cin>>name;
		if(i==S){
			cout<<name<<endl;
			ID[count]=name;
			count++;
		}
		if(i>S&&(i-S)%N==0){
			if(isprime(name)){
				cout<<name<<endl;
				ID[count]=name;
				count++;
			}
			else
				flag++;
		}
		if(flag){
			if(isprime(name)){
				cout<<name<<endl;
				ID[count]=name;
				count++;
				flag--;
			}
		}
	}
	if(count==0)
		cout<<"Keep going...\n";
	
	return 0;
} 
