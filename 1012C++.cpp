#include <iostream>
#include <cstring>
using namespace std;

/*
1012 数字分类
本题核心：
（1）每一条Ai的处理
（2）如何判断是否有的Ai不存在
（3）小数的输出 
*/

int a[6];
int main(){
	 int N;
	 cin>>N;
	 memset(a,0,sizeof(a));
	 int flag=0,sum=0;
	 int flag_a[6];
	 memset(flag_a,0,sizeof(flag_a));
	 while(N--){
	 	int t;
	 	cin>>t;
	 	if(t%5==0&&t%2==0){
	 		a[1]+=t;
	 		flag_a[1]=1;
		}
	 	if(t%5==1){
	 		flag_a[2]=1;
	 		if(flag==0){
	 			a[2]+=t;
	 			flag=1;
			 }
			 else{
			 	a[2]-=t;
			 	flag=0;
			 }
		 }
	 	if(t%5==2){
	 		flag_a[3]=1;
	 		a[3]++;
		 }
		if(t%5==3){
			flag_a[4]=1;
			a[4]+=t;
			sum++;
		}
		if(t%5==4){
			flag_a[5]=1;
			a[5]=max(a[5],t);
		}
	 }
	 for(int i=1;i<5;i++){
	 	if(flag_a[i]==0)
	 		cout<<"N ";
	 	else{
	 		if(i==4)
	 			printf("%.1f ",(float)a[4]/sum);
	 		else
	 			cout<<a[i]<<" ";
		}
	 }
	if(flag_a[5]==0)
		cout<<"N";
	else
		cout<<a[5];
	return 0;
}
