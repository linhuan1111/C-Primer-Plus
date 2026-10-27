#include<stdio.h>
double li(double x)
{
    double y=x*x*x;
    return y;
} 
    int main(void)
{
    double a;
    scanf("%lf",&a);
    double b=li(a);
    printf("%lf",b);
    return 0;
}