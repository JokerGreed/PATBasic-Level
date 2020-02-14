#include <iostream>
#include <vector>
using namespace std;

/*
1073 多选题常见计分法
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
	problem p[1010];
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
	
	
	return 0;
}
