#include <iostream>
#include <vector>
using namespace std;

/*
1058 选择题
本题核心
输入 
*/

struct problem{
	int score;
	int sum;
	int anw;
	vector <char> right;
};

int main(){
	int N,M;
	cin>>N>>M;
	problem p[105];
	int wrong[105]={0};
	
	for(int i=0;i<M;i++){
		cin>>p[i].score;
		cin>>p[i].sum;
		cin>>p[i].anw;
		for(int j=0;j<p[i].anw;j++){
			char c;
			cin>>c;
			p[i].right.push_back(c);
		}
	}
	
    int maxw=0;
	while(N--){
		int sum=0;
		for(int i=0;i<M;i++){
			int k;
			vector <char> an;
			an.clear();
			char c;
			while(1){
				c=getchar();
				if(c==')')
					break;
				if(c>='0'&&c<='9')
					k=c-'0';
				if(c>='a'&&c<='z')
					an.push_back(c);
			}
//			for(int j=0;j<k;j++)
//				cout<<an[j];
//			cout<<endl;
			if(k!=p[i].anw){
				wrong[i]++;
                maxw=max(maxw,wrong[i]);
				continue;
			}
			else{
				int flag=0;
				for(int j=0;j<p[i].anw;j++){
					if(p[i].right[j]!=an[j]){
//						cout<<an[j];
						wrong[i]++;
                        maxw=max(maxw,wrong[i]);
						flag=1;
						break;
					}
				}
				if(!flag)
					sum+=p[i].score;
			}
		}
		cout<<sum<<endl;
	}
	
	if(maxw==0)
		cout<<"Too simple";
	else{
		cout<<maxw;
		for(int i=0;i<M;i++)
			if(maxw==wrong[i])
				cout<<" "<<i+1;
	}
	
	
	return 0;
}
