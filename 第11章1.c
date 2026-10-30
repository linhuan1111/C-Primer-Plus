#include<stdio.h>
int zhuan(char*x)
{
    int ji=0;
    while(*x!='\0')
    {
        ji=ji*2+(*x-'0');
        x++;
    }
    return ji;
}
int main(void)
{
    char pbin[1000];
    scanf("%s",pbin);
    int m=zhuan(pbin);
    printf("%d\n",m);
    return 0;
}