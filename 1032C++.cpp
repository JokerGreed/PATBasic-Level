#include <iostream>
using namespace std;

/*
1032 �ھ�������ļ�ǿ
������ģ�
��1���ܷ�ͳ��
��2��ʵʱ��¼ 
*/

int main(){
	int N;
	cin>>N;
	int school[100100]={0},max_num,max_crous=0;
	while(N--){
		int school_num,crous;
		cin>>school_num>>crous;
		school[school_num]+=crous;
		if(max_crous<school[school_num]){
			max_num=school_num;
			max_crous=school[school_num];
		}
	}
	cout<<max_num<<" "<<max_crous;
	return 0;
}
