#include<stdio.h>
#include<ctype.h>
int fen(void)
{
    int ch;
    int shu=0;
    while((ch=getchar())!=EOF&&ch!='\n')
    {
        if(isdigit(ch)==0)
        {
            return 0;
        }
        shu=shu*10+(ch-'0');
    }
    return shu;
}
int main(void)
{
    printf("Please enter:");
    int da=fen();
    printf("%d\n",da);
    return 0;
}