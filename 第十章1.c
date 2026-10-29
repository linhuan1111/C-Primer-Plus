#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) 
{
    if (argc != 3) 
    {
        return 1;
    }
    double base = atof(argv[1]);
    int exp = atoi(argv[2]);
    double result = pow(base, exp);
    printf("%.2f 的 %d 次幂是: %.4f\n", base, exp, result);
    return 0;
}