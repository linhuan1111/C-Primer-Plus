#include<stdio.h>
#include<ctype.h>
int main(void)
{
    int c;
    int shu=0;
    while((c=getchar())!=EOF)
    {
        if(isprint(c)==0)
        {
            if(c=='\n')
            {
                printf("\\n ");
            }
            else if(c=='\t')
            {
                printf("\\t ");
            }
            else
            {
                printf("%c-%d ",c+64,c);
            }
        }
        else
        {
            printf("%c-%d ",c,c);
        }
        shu++;
        if(shu%10==0)
        {
            printf("\n");
            shu=0;
        }
    }
    return 0;
}