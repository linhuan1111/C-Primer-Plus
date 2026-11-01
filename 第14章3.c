#include<stdio.h>
#include<math.h>
void transform(double *source,double *target,int n,double(*suan)(double x))
{
    for(int i=0;i<n;i++)
    {
        target[i]=suan(source[i]);
    }
}
double fang(double m)
{
    m*=m;
    return m;
}
double chu(double m)
{
    m=m/10;
    return m;
}
int main(void)
{
    double source[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    double target[20];
    transform(source,target,20,fang); 
    for(int i=0;i<20;i++)
    {
        printf("%.2lf ",target[i]);
    }
    printf("\n");
    transform(source,target,20,chu);
    for(int i=0;i<20;i++)
    {
        printf("%.2lf ",target[i]);
    }
    printf("\n");
    transform(source,target,20,sin);
    for(int i=0;i<20;i++)
    {
        printf("%.2lf ",target[i]);
    }
    printf("\n");
    transform(source,target,20,cos);
    for(int i=0;i<20;i++)
    {
        printf("%.2lf ",target[i]);
    }
    printf("\n");
    return 0;
}
