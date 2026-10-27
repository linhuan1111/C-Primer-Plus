#include<stdio.h>
#include<float.h>
int main(void)
{
    double x=1.0/3.0;
    float y=1.0/3.0;
    printf("x.6=%.6lf\n",x);
    printf("x.12=%.12lf\n",x);
    printf("x.16=%.16lf\n\n",x);
    printf("y.6=%.6f\n",y);
    printf("y.12=%.12f\n",y);
    printf("y.16=%.16f\n\n",y);
    printf("FLT_DIG=%d\n",FLT_DIG);
    printf("DBL_DIG=%d\n",DBL_DIG);
    return 0;
}