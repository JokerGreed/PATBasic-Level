#include <iostream>
using namespace std;

/*
1082 Éä»÷±ÈÈü
*/

struct sheji{
	int ID;
	int x;
	int y;
};
void temp(sheji &a,sheji b){
	a.ID=b.ID;
	a.x=b.x;
	a.y=b.y;
}

bool cmp(sheji a,sheji b){
	int as,bs;
	as=a.x*a.x+a.y*a.y;
	bs=b.x*b.x+b.y*b.y;
	if(as<bs)
		return true;
	else
		return false;
}

int main(){
	int N;
	cin>>N;
	sheji maxID,minID,id;
	cin>>id.ID>>id.x>>id.y;
	temp(maxID,id);
	temp(minID,id);
	N--;
	while(N--){
		cin>>id.ID>>id.x>>id.y;
		if(cmp(id,maxID))
			temp(maxID,id);
		if(cmp(minID,id))
			temp(minID,id);
	}
	printf("%04d %04d\n",maxID.ID,minID.ID);
	
	return 0;
}
