#include<stdio.h>
int jishu(int n)
{
    static int i=1;
    printf("第%d次\n",i);
    i++;
    return n;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    while(n>0)
    {
        jishu(n);
        n--;
    }
    return 0;
}