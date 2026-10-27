#include<stdio.h>
int main(void)
{
    int money,kind;
    double jm;
    const int dan=17850;
    const int hu=23900;
    const int gong=29750;
    const int li=14875;
    scanf("%d",&money);
    scanf("%d",&kind);
    switch(kind)
    {
        case 1:
        if(money<dan)
            jm=0.15*money;
        else
            jm=(0.15*dan)+(0.28*(money-dan));
        printf("%.2f\n", jm);
        break;
        case 2:
        if(money<hu)
            jm=0.15*money;
        else
            jm=(0.15*hu)+(0.28*(money-hu));
        printf("%.2f\n", jm);
        break;
        case 3:
        if(money<gong)
            jm=0.15*money;
        else
            jm=(0.15*gong)+(0.28*(money-gong));
        printf("%.2f\n", jm);
        break;
        case 4:
        if(money<li)
            jm=0.15*money;
        else
            jm=(0.15*li)+(0.28*(money-li));
        printf("%.2f\n", jm);
        break;
    }
    return 0;
}