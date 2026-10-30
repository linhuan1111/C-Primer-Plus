#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc,char *argv[])
{
    char modle ='p';
    int c;
    if(strcmp(argv[1],"-p")==0)
    {
        modle='p';
    }
    else if(strcmp(argv[1],"-u")==0)
    {
        modle='u';
    }
    else if(strcmp(argv[1],"-l")==0)
    {
        modle='l';
    }
    else 
    {
        printf("No!");
    }
    while((c=getchar())!=EOF)
    {
        if(modle=='p')
        {
            putchar(c);
        }
        else if(modle=='u')
        {
            putchar(toupper(c));
        }
        else if(modle=='l')
        {
            putchar(tolower(c));
        }
    }
    return 0;
}