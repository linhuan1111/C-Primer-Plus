#include<stdio.h>
int main(void)
{
    char choice;
    float num1, num2;
    printf("Enter the operation of your choice:\n");
    printf("a.add\ts.subtract\n");
    printf("m.multiply      d.divide\n");
    printf("q.quit\n");
    while (scanf(" %c",&choice)==1&&choice!='q')
    {
        if (choice != 'a' && choice != 's' && choice != 'm' && choice != 'd') 
        {
            printf("choice(a,s,m,d,q):\n");
            while (getchar()!='\n'); 
            continue; 
        }
        printf("Enter first number:");
        scanf("%f",&num1);
        
        printf("Enter second number:");
        scanf("%f",&num2);
        switch (choice) 
        {
            case 'a':
                printf("%.2f+%.2f=%.2f\n\n",num1,num2,num1+num2);
                break;
            case 's':
                printf("%.2f-%.2f=%.2f\n\n",num1,num2,num1-num2);
                break;
            case 'm':
                printf("%.2f*%.2f=%.2f\n\n",num1,num2,num1*num2);
                break;
            case 'd':
                if (num2 == 0) 
                {
                    printf("Cannot divide by zero! Please try again.\n\n");
                } 
                else 
                {
                    printf("%.2f/%.2f=%.2f\n\n",num1,num2,num1/num2);
                }
                break;
        }
    }
    return 0;
}