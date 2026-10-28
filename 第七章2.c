#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int c;
    int shu=0;
    while(((c=getchar())!=EOF)&&c!='\n')
    {
        printf("%c",c);
        if(isalpha(c)!=0)
        {
            shu++;
        }
        else
        {
            printf("\n%d\n",shu);
            shu=0;
        }
    }
    printf("\n%d\n",shu);
    return 0;
}