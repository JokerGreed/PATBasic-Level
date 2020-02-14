#include <iostream>
#include <algorithm>
using namespace std;

/*
1035 ²åÈëÓë¹é²¢
*/

int main(){
	int N;
	cin>>N;
	int a[101],b[101];
	int i,j;
	for(i=0;i<N;i++)
		cin>>a[i];
	for(i=0;i<N;i++)
		cin>>b[i];
		
	for(i=0;i<N-1&&b[i]<=b[i+1];i++);
	for(j=i+1;a[j]==b[j]&&j<N;j++);
	
	if(j==N){
		cout<<"Insertion Sort"<<endl;
		sort(a,a+i+2);
	}
	else{
		cout<<"Merge Sort"<<endl;
		int k=1,flag=1;
		while(flag){
			flag=0;
			for(i=0;i<N;i++)
				if(a[i]!=b[i])
					flag=1;
			k=k*2;
			for(i=0;i<N/k;i++)
				sort(a+i*k,a+(i+1)*k);
			sort(a+N/k*k,a+N);
		}
	}
	for(j=0;j<N-1;j++)
		cout<<a[j]<<" ";
	cout<<a[j];	
	
	return 0;
}
