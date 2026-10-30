#include<stdio.h>
#include<string.h>
void print1(unsigned int fu);
void wei(char*p1,int len1,char*p2,int len2);
int main(void)
{
    char p1[1000]={0};
    char p2[1000]={0};
    scanf("%s%s",p1,p2);
    int len1=strlen(p1);
    int len2=strlen(p2);
    wei(p1,len1,p2,len2);
    return 0;
}
void wei(char*p1,int len1,char*p2,int len2)
{
    int x=0,y=0;
    unsigned int f1=0,f2=0,yu=0,huo=0,xor=0;
    for(int i=0;i<len1;i++)
    {
        x=p1[i]-'0'+x*2;
    }
    for(int i=0;i<len2;i++)
    {
        y=p2[i]-'0'+y*2;
    }
    f1=~x;
    f2=~y;
    yu=x&y;
    huo=x|y;
    xor=x^y;
    print1(f1);
    print1(f2);
    print1(yu);
    print1(huo);
    print1(xor);
}
void print1(unsigned int fu) 
{
    for(int i=31;i>=0;i--)
    {
        int m=fu>>i&1;
        printf("%d",m);
    }
    printf("\n");
}