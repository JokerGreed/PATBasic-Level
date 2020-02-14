#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/*
1050 螺旋矩阵
本题核心
螺旋处理 
*/

bool cmp(int a,int b){
	if(a>b)
		return true;
	else
		return false;
}

int main(){
	int N;
	cin>>N;
	int m,n;//m行，n列 
	for(int i=sqrt(N);i>=0;i--)
		if(N%i==0){
			n=i;
			m=N/i;
			break;
		}
//	cout<<m<<" "<<n;
	
	int num[10010];
	for(int i=0;i<N;i++)
		cin>>num[i];
	sort(num,num+N,cmp);
	
	int shang=-1,xia=m,zuo=-1,you=n;
	
	int flag[101][101];
	int i=0,j=0,ans=0;
	while(1){
		for(;j<you;j++){
			flag[i][j]=num[ans];
			ans++;
		}
		shang++;
		if(xia==i+1)
			break;
		else{
			i++;
			j--;
		}
		
		for(;i<xia;i++){
			flag[i][j]=num[ans];
			ans++;
		}
		you--;
		if(zuo==j-1)
			break;
		else{
			j--;
			i--;
		}
		
		for(;j>zuo;j--){
			flag[i][j]=num[ans];
			ans++;
		}
		xia--;
		if(shang==i-1)
			break;
		else{
			i--;
			j++;
		}
		
		for(;i>shang;i--){
			flag[i][j]=num[ans];
			ans++;
		}
		zuo++;
		if(you==j+1)
			break;
		else{
			i++;
			j++;
		}
	}
	
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(j==n-1)
				cout<<flag[i][j]<<endl;
			else
				cout<<flag[i][j]<<" ";

	
	return 0;
} 
