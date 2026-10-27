#include<stdio.h>
int main(void)
{
    int friend=5;
    int i=1;
    while(friend<150)
    {
        friend-=i;
        friend*=2;
        if(friend<0||friend>150)
        {
            break;
        }
        printf("friend=%d\n",friend);
        i++;
    }
    return 0;
}