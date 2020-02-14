#include <iostream>
#include <cstring>
using namespace std;

/*
1054 求平均值
*/ 

int main(){
	int N;
	cin>>N;
	double sum=0;
	int ans=0;
	while(N--){
		char a[50],b[50];
		cin>>a;
		double temp;
		sscanf(a,"%lf",&temp);
		sprintf(b,"%.2lf",temp);
//		cout<<temp<<endl;

		int flag=0;
		for(int i=0;i<strlen(a);i++)
			if(a[i]!=b[i]){
				flag=1;
				break;
			}
		
		if(temp<-1000||temp>1000||flag)
			cout<<"ERROR: "<<a<<" is not a legal number\n";
		else{
			ans++;
			sum+=temp;
		}
	}
	if(ans==0)
		printf("The average of 0 numbers is Undefined\n");
	else if(ans==1)
		printf("The average of %d number is %.2lf\n",ans,sum/ans);
	else
		printf("The average of %d numbers is %.2lf\n",ans,(double)sum/ans);
	
	return 0;
}
