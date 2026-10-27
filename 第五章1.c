#include<stdio.h>
int main(void)
{
    double da=100.0,de=100.0;
    int i=0;
    while(da>=de)
    {
        da=da+(100.0*0.1);
        de=de+(de*0.05);
        i++;
    }
    printf("i=%d\nDaphne have %.2lf\nDeirdre have %.2lf\n",i,da,de);
    return 0;
}