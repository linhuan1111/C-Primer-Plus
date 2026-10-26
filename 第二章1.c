#include<stdio.h>
int main(void)
{
    double quart,shu;
    printf("Please enter the number of quarts:");
    scanf("%lf",&quart);
    shu=(quart*950)/3.0e-23;
    printf("the number of wather is %lf\n",shu);
    return 0;
}