#include <iostream>
#include <vector> 
#include <cmath>
using namespace std;

/*
1089 ÀÇÈËÉ±-¼òµ¥°æ
*/

int main(){
	int N;
	cin>>N;
	vector <int> v(N+1);
	
	for(int i=1;i<=N;i++)
		cin>>v[i];
	
	for(int i=1;i<=N;i++){
		for(int j=i+1;j<=N;j++){
			vector <int> lie,a(N+1,1);
			a[i]=a[j]=-1;
			for(int k=1;k<=N;k++)
				if(v[k]*a[abs(v[k])]<0)
					lie.push_back(k);
			
			if(lie.size()==2&&a[lie[0]]+a[lie[1]]==0){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}
	cout<<"No Solution";
	 
	return 0;
} 
