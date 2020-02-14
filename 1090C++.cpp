#include <iostream>
#include <vector>
#include <map>
using namespace std;

/*
1090 Î£ÏÕÆ·×°Ïä
*/

int main(){
	int N,M;
	cin>>N>>M;
	map <int,vector<int> > m;
	for(int i=0;i<N;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		m[a].push_back(b);
		m[b].push_back(a);
	}
	while(M--){
		int K;
		scanf("%d",&K);
		int flag[100000]={0};
		vector <int> v;
		for(int i=0;i<K;i++){
			int num;
			cin>>num;
			v.push_back(num);
			flag[num]++; 
		}
		int t=0;
		for(int i=0;i<v.size();i++)
			for(int j=0;j<m[v[i]].size();j++)
				if(flag[m[v[i]][j]])
					t=1;
					
		printf("%s\n",t?"No":"Yes");
	}
	
	return 0;
}
