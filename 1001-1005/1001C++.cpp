//1001 害死人不偿命的(3n+1)猜想 

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans=0;
	while(n!=1){
		ans++;
		if(n%2==0)
			n=n/2;
		else
			n=(3*n+1)/2;
	}
	cout<<ans<<endl;
	return 0;
}
