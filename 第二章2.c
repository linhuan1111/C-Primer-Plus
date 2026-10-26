#include<stdio.h>
int main(void)
{
    double tall,tallcm;
    scanf("%lf",&tall);
    tallcm=tall*2.54;
    printf("the tall is %.2lfcm",tallcm);
    return 0;
}