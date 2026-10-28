#include<stdio.h>
void three(double*a,double*b,double*c)
{
    double t;
    if(*a>*b)
    {
        t=*a;
        *a=*b;
        *b=t;
    }
    if(*a>*c)
    {
        t=*a;
        *a=*c;
        *c=t;
    }
    if(*b>*c)
    {
        t=*b;
        *b=*c;
        *c=t;
    }
    printf("从小到大排序为：%lf %lf %lf\n",*a,*b,*c);
}
int main(void)
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);
    three(&a,&b,&c);
    return 0;
}