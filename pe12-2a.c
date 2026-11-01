#include<stdio.h>
#include"pe12-2a.h"

static int mode;
static double distance;
static double fuel;

void set_mode(int m) 
{
    if(m!=0&&m!=1)
    {
        printf("No!\n");
        return;
    }
    else
    {
        mode = m;
    }
}

void get_info() 
{
    if (mode == 0) 
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &fuel);
    } 
    else 
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &fuel);
    }
}

void show_info() 
{
    if (mode == 0) {
        printf("Fuel consumption is %.2f liters per 100 km\n", (fuel / distance) * 100);
    } else {
        printf("Fuel consumption is %.2f miles per gallon\n", distance / fuel);
    }
}