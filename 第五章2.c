#include<stdio.h>
int main(void)
{
    double luck=1000000;
    int i=0;
    while(luck>0)
    {
        luck+=luck*0.08;
        luck-=100000;
        i++;
    }
    printf("%d year.\n", i);
    return 0;
}