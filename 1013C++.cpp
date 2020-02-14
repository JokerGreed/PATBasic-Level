#include <iostream>
#include <cmath>
using namespace std;

/*
1013 数素数
本题核心：
（1）素数的判断，用开方来降低时间复杂度
（2）计数问题 
*/

bool prime(int a){
	for(int i=2;i<=sqrt(a);i++)
		if(a%i==0)
			return false;
	
	return true;
} 

int main(){
	int M,N;
	cin>>M>>N;
	for(int i=2,count=0;;i++){
		if(prime(i)){
			count++;
			if(M<=count&&count<=N){
				if((count-M)%10==0)
					cout<<i;
				else
					cout<<" "<<i;
				if((count-M+1)%10==0)
					cout<<endl;
			}
			if(count>N)
				break;
		}
	}
	
	return 0;
}
