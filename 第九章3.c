#include<stdio.h>

void shuru(int rows, int cols, double arr[rows][cols]);
double hangpingjun(int rows, int cols, double arr[rows][cols]);
double pingjun(int rows, int cols, double arr[rows][cols]);
double max(int rows, int cols, double arr[rows][cols]);
void dayin(double hangpj, double pj, double ji);

int main(void)
{
    int rows = 3;
    int cols = 5;
    double arr[rows][cols];
    
    shuru(rows, cols, arr);
    double hangpj = hangpingjun(rows, cols, arr);
    double pj = pingjun(rows, cols, arr);
    double ji = max(rows, cols, arr);
    dayin(hangpj, pj, ji);
    
    return 0;
}

void shuru(int rows, int cols, double arr[rows][cols])
{
    printf("Please enter 3 groups of 5 double numbers:\n");
    for(int i=0; i<rows; i++)
    {
        printf("group %d:", i);
        for(int j=0; j<cols; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

double hangpingjun(int rows, int cols, double arr[rows][cols])
{
    double hangpj;
    int hang;
    double shu=0;
    printf("Please enter the row:");
    scanf("%d", &hang);
    for(int i=0; i<cols; i++)
    {
        shu = shu + arr[hang][i];
    }
    hangpj = shu / cols;
    return hangpj;
}

double pingjun(int rows, int cols, double arr[rows][cols])
{
    double shu=0;
    double pj;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            shu += arr[i][j];
        }
    }
    pj = shu / (rows * cols);
    return pj;
}

double max(int rows, int cols, double arr[rows][cols])
{
    double ji=0;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            if(arr[i][j] > ji)
            {
                ji = arr[i][j];
            }
        }
    }
    return ji;
}

void dayin(double hangpj, double pj, double ji)
{
    printf("The row averange is %lf\n", hangpj);
    printf("The averange is %lf\n", pj);
    printf("The max number is %lf\n", ji);
}
