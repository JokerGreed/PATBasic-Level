#include <iostream>
using namespace std;

/*
1072 ¿ªÑ§¼ÄÓï
*/

int main(){
	int N,M;
	cin>>N>>M;
	int a[10010]={0};//Î¥½ûÆ·
	string name; 
	int num;
	for(int i=0;i<M;i++){
		cin>>num;
		a[num]=1;
	}
	int ans[10010],count_sum=0,count,cnt=0;
	int k;
	while(N--){
		cin>>name;
		cin>>k;
		count=0;
		for(int i=0;i<k;i++){
			scanf("%d",&num);
			if(a[num]==1)
				ans[count++]=num;
		}
		if(count!=0){
			cnt++;
			count_sum+=count;
			cout<<name<<": ";
			for(int i=0;i<count;i++)
				if(i==0)
					printf("%04d",ans[i]);
				else
					printf(" %04d",ans[i]);
			cout<<endl;
		}
	}
	cout<<cnt<<" "<<count_sum<<endl;
	
	return 0;
}
