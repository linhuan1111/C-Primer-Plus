#include<stdio.h>
#include<ctype.h>
int weizhi(char c)
{
    int w;
    if(isalpha(c))
    {
        printf("yes! ");
        if(c>='a'&&c<='z')
        {
            w=c-'a'+1;
            printf("%d\n",w);
        }
        else if(c>='A'&&c<='Z')
        {
            w=c-'A'+1;
            printf("%d\n",w);
        }
    }
    else
    {
        printf("No!");
        w=-1;
        printf("%d\n",w);
    }
    return w;
}
int main(void)
{
    int c;
    while((c=getchar())!=EOF&&c!='\n')
    {
        weizhi(c);
    }
    return 0;
}