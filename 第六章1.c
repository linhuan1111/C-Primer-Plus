#include<stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    if(x>0)
    {
        for(int i=1;i<=x;i++)
        {
            int tmp=1;
            for(int j=2;j<=i;j++)
            {
                if(i%j==0&&(j!=1&&j!=i))
                {
                    tmp=0;
                }
            }
            if(tmp==1)
            {
                printf("%d ",i);
            }
        }
    }
    return 0;  
}