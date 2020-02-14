#include <iostream>
#include <algorithm>
using namespace std;

/*
1045 快速排序
本题核心：
如何判断什么是主元 
*/ 

int main(){
	int N;
	cin>>N;
	int a[100100],b[100100],c[100100];
	int i;
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	sort(b,b+N);
	int ans=0,max=0;
	
	for(i=0;i<N;i++){
		if(max<a[i])
			max=a[i];
		if(max==a[i]&&max==b[i]){
			c[ans]=max;
			ans++;
		}
	}
	
	cout<<ans<<endl;
	for(i=0;i<ans;i++)
		if(i==0)
			cout<<c[i];
		else
			cout<<" "<<c[i];
	cout<<endl;//这个不能少，当ans为0时，这个能保证正确 
	
	return 0;
}
