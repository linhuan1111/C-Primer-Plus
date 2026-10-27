#include<stdio.h>
#include<string.h>
int main(void)
{
    char lastname[40];
    char firstname[40];
    int len1,len2;
    printf("Please enter your last name:");
    scanf("%s",lastname);
    printf("Please enter your first name:");
    scanf("%s",firstname);
    len1=strlen(lastname);
    len2=strlen(firstname);
    printf("%s %s\n%*d %*d\n",lastname,firstname,len1,len1,len2,len2);
    printf("%s %s\n%-*d %-*d\n",lastname,firstname,len1,len1,len2,len2);
    return 0;
}