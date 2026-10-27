#include<stdio.h>
int main(void)
{
    int x,y;
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&x);
    printf("Now enter the first operand:");
    scanf("%d",&y);
    while(y>0)
    {
        printf("%d %% %d is %d\n",x,y,y%x);
        printf("Enter next number for first operand (<=0 to quit):");
        scanf("%d",&y);
    }
    if(y<=0)
    {
        printf("Done\n");
    }
    return 0;
}