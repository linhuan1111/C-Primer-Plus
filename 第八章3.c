#include<stdio.h>
long long Fibonacci(int n)
{
    long long p1=1;
    long long p2=1;
    long long p3=0;
    if(n<=0)
    {
        return -1;
    }
    if(n==1||n==2)
    {
        return 1;
    }
    for(int i=3;i<=n;i++)
    {
        p3=p1+p2;
        p1=p2;
        p2=p3;
    }
    return p3;
}
int main(void)
{
    int n;
    scanf("%d",&n);
    printf("%lld",Fibonacci(n));
    return 0;
}