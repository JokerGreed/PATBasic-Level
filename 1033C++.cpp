#include <iostream>
#include <cstring>
using namespace std;

/*
1033 旧键盘打字
本题核心：
（1）字符的标记
（2）当上档键坏掉时，大写字符的处理 
*/

int main(){
	char  ch;
	int flag[150]={0};
	while((ch=getchar())!='\n'){
		flag[ch]=1;
		if(ch>='A'&&ch<='Z'){
			flag[ch-'A'+'a']=1;
		}
	}
	if(flag['+']==1){
		for(int i='A';i<='Z';i++)
			flag[i]=1;
	}

		
	while((ch=getchar())!='\n')
		if(flag[ch]==0)
			cout<<ch;
		
	
	return 0;
}
