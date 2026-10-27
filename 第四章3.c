#include<stdio.h>
void Temperatures(double F)
{
    const double k=273.16;
    const double c1=5.0/9.0;
    const double c2=32.0;
    double C=c1*(F-c2);
    double K=C+k;
    printf("F=%.2lf\nC=%.2lf\nK=%.2lf\n",F,C,K);
}
int main(void)
{
    double F;
    while(scanf("%lf",&F)==1)
    {
        Temperatures(F);
    }
    return 0;
}