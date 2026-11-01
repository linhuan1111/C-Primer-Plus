#include<stdio.h>
#include "调和平均数.h"

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf%lf", &a, &b);
    printf("%.2f\n", HARMONIC_MEAN(a, b));
    return 0;
}