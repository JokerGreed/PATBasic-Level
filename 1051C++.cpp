#include <iostream>
#include <cmath>
using namespace std;
/*
1051 ¸´Êý³Ë·¨
*/
 
int main(){
	double R1,P1,R2,P2;
	cin>>R1>>P1>>R2>>P2;
	double A,B;
	A=R1*R2*cos(P1+P2);
	B=R1*R2*sin(P1+P2);
	if (A + 0.005 >= 0 && A < 0)
        printf("0.00");
    else
        printf("%.2f", A);
    if(B >= 0)
        printf("+%.2fi", B);
    else if (B + 0.005 >= 0 && B < 0)
        printf("+0.00i");
    else
        printf("%.2lfi", B);
	
	return 0;
}
