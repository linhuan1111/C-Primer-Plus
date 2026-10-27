#include<stdio.h>
int main(void)
{
    float v,z,t;
    scanf("%f%f",&v,&z);
    t=z*8/v;
    printf("At %.2f megabits per second,a file of %.2f megabytes\ndownloads in %.2f seconds.\n",v,z,t);
    return 0;
}