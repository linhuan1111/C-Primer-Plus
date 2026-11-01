#include<stdio.h>
#include<time.h>
void yanchi(double n)
{
    clock_t start_time=clock();
    clock_t target_timer=start_time+(clock_t)(n*CLOCKS_PER_SEC);
    while(clock()<target_timer)
    {

    }
}
int main(void)
{
    double n;
    printf("Please enter the number of seconds to delay: ");
    scanf("%lf",&n);
    clock_t start=clock();
    yanchi(n);
    clock_t end=clock();
    printf("Delay completed.\n");
    printf("Time taken: %lf seconds\n", (double)(end - start) / CLOCKS_PER_SEC);
    return 0;
}