#include <stdio.h>
/*
1034 ��������������
*/

typedef struct frac_{long n, d, s;} FC;
// �����Լ���ĺ���
long gcd(long a, long b) {return b == 0 ? a : gcd(b, a % b);}
// ����������
FC hand(FC a)
{
    if (a.n < 0) {a.s *= -1; a.n *= -1;} // �������Ϊ���������Ÿ������ű���������ȡ��ֵ
    long tmp = gcd(a.n, a.d);
    a.n /= tmp;
    a.d /= tmp; // Լ��
    return a;
}
// ���������������
void prt_fc(FC a)
{
    if (a.d == 0)
        printf("Inf"); // �����ĸΪ0�����Inf
    else {
        long i = a.n / a.d; // ��ȡ��������
        a.n = a.n % a.d; // ������Ϊ�����
        a = hand(a); // Լ��
        if (a.n == 0 && i == 0) printf("0"); // �������С�����־�Ϊ0�����0
        else {
            if (a.s == -1) printf("(-"); // �������Ϊ������������ź͸���
            if (i != 0) printf("%ld", i);
            if (i != 0 && a.n != 0) printf(" ");
            if (a.n != 0) printf("%ld/%ld", a.n, a.d);
            if (a.s == -1) printf(")");
        }
    }
}
// ��ʽ�������
void prt_eq(FC a, FC b, char c, FC (*fig)(FC, FC))
{
    prt_fc(a);
    printf(" %c ", c);
    prt_fc(b);
    printf(" = ");
    prt_fc(hand((*fig)(a, b)));
    printf("\n");
}
// ���㺯�����Ӽ��˳�
FC plus (FC a, FC b) {return (FC){a.s*a.n*b.d + b.s*b.n*a.d, a.d*b.d, 1};}
FC sub  (FC a, FC b) {return (FC){a.s*a.n*b.d - b.s*b.n*a.d, a.d*b.d, 1};}
FC multi(FC a, FC b) {return (FC){a.n*b.n, a.d*b.d, a.s*b.s};}
FC divis(FC a, FC b) {return (FC){a.n*b.d, a.d*b.n, a.s*b.s};}

int main()
{
    FC a = {0, 0, 1}, b = {0, 0, 1}, (*fig[])(FC, FC) = {plus, sub, multi, divis};
    char c[5] = "+-*/";

    scanf("%ld/%ld %ld/%ld", &a.n, &a.d, &b.n, &b.d); // ��ȡ����a��b
    for (int i = 0; i < 4; i++)
        prt_eq(hand(a), hand(b), c[i], fig[i]); // ��������ķ�����������ţ����㺯�������ݸ���ʽ�������

    return 0;
}

