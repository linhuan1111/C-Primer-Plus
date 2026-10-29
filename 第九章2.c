#include<stdio.h>
#define ROW 3
#define C 5
void shuru(double arr[][C]);
double hangpingjun(double arr[][C]);
double pingjun(double arr[][C]);
double max(double arr[][C]);
void dayin(double hangpj,double pj,double ji);
int main(void)
{
    double arr[ROW][C];
    shuru(arr);
    double hangpj=hangpingjun(arr);
    double pj=pingjun(arr);
    double ji=max(arr);
    dayin(hangpj,pj,ji);
    return 0;
}
void shuru(double arr[][C])
{
    printf("Please enter 3 groups of 5 double numbers:\n");
    for(int i=0;i<ROW;i++)
    {
        printf("group %d:",i);
        for(int j=0;j<C;j++)
        {
            scanf("%lf",&arr[i][j]);
        }
    }
}
double hangpingjun(double arr[][C])
{
    double hangpj;
    int hang;
    double shu=0;
    printf("Please enter the row:");
    scanf("%d",&hang);
    for(int i=0;i<C;i++)
    {
        shu=shu+arr[hang][i];
    }
    hangpj=shu/C;
    return hangpj;
}
double pingjun(double arr[][C])
{
    double shu=0;
    double pj;
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<C;j++)
        {
            shu+=arr[i][j];
        }
    }
    pj=shu/(ROW*C);
    return pj;
}
double max(double arr[][C])
{
    double ji=0;
    for(int i=0;i<ROW;i++)
    {
        for(int j=0;j<C;j++)
        {
            if(arr[i][j]>ji)
            {
                ji=arr[i][j];
            }
        }
    }
    return ji;
}
void dayin(double hangpj,double pj,double ji)
{
    printf("The row averange is %lf\n",hangpj);
    printf("The averange is %lf\n",pj);
    printf("The max number is %lf\n",ji);
}