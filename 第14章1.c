#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int run(int year)
{
    return(year%400==0 || (year%4==0 && year%100!=0));
}
int main(void)
{
    int day,month,year,alldays;
    char monthname[20];
    int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Enter the date(like 1 January 2020 or 1 1 2020):");
    scanf("%d %s %d",&day,monthname,&year);
    if(isdigit(monthname[0]))
    {
        month=atoi(monthname);
    }
    else
    {
        char *monthnames[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
        for(int i=0;i<12;i++)
        {
            if(strncmp(monthname,monthnames[i],3)==0)
            {
                month=i+1;
                break;
            }
        }
    }
    if(run(year)==1)
    {
        monthday[1]=29;
    }
    for(int i=0;i<=month-2;i++)
    {
        alldays+=monthday[i];
    }
    alldays+=day;
    printf("The date is the %d day of the year %d.\n",alldays,year);
    return 0;
}