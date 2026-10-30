#include<stdio.h>
int wei(int m,int n)
{
    if(m>>n&1)
    {
        printf("1\n");
        return 1;
    }
    else
    {
        printf("0\n");
        return 0;
    }
}
int main(void)
{
    int m,n;
    printf("Please enter number and bit:");
    scanf("%d%d",&m,&n);
    int result=wei(m,n);
    return 0;
}