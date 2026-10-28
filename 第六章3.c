#include<stdio.h>
int main(void)
{
    const double yang=2.05;
    const double tian=1.15;
    const double hu=1.09;
    char x;
    double a=0,b=0,c=0,money=0;
    while(x!='q')
    {
        printf("请输入你想要的：\n");
        printf("a.yang %.2f\n", yang);
        printf("b.tian %.2f\n", tian);
        printf("c.hu %.2f\n", hu);
        printf("q.退出\n");
        scanf(" %c",&x);
        switch(x)
        {
            case 'a':
                scanf("%lf",&a);
                break;
            case 'b':
                scanf("%lf",&b);
                break;
            case 'c':
                scanf("%lf",&c);
                break;
            case 'q':
                printf("退出程序。\n");
                break;
            default:
                printf("输入错误，请重新输入。\n");
                break;
        }
    }
    double my=a*yang;
    double mt=b*tian;
    double mh=c*hu;
    double mz=0;
    double zhe=0;
    if((my+mt+mh)>100)
    {
        zhe=0.05*(my+mt+mh);
        money=0.95*(my+mt+mh);
    }
    else 
    {
        money=my+mt+mh;
    }
    double s=a+b+c;
    if(s<=5)
    {
        mz=6.5;
        money+=6.5;
    }
    else if(s>5&&s<=20)
    {
        mz=6.5+14;
        money+=6.5+14;
    }
    else if(s>10)
    {
        mz=6.5+14+((s-20)*0.5);
        money+=6.5+14+((s-20)*0.5);
    }
    printf("总金额为：%.2lf\n",money);
    printf("总数量为：%.2lf\n",s);
    printf("yang数量为:%.2lf花费：%.2lf\n",a,my);
    printf("tian数量为:%.2lf花费：%.2lf\n",b,mt);
    printf("hu数量为:%.2lf花费：%.2lf\n",c,mh);
    printf("折扣金额为：%.2lf\n",zhe);
    printf("包装费为：%.2lf\n",mz);
    return 0;
}