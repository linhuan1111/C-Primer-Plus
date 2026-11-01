#include <stdio.h>
#define CSIZE 4
struct name 
{
    char first[20];
    char last[20];
};
struct student 
{
    struct name name; 
    double grade[3];
    double average;
};
int main() 
{
    struct student student[CSIZE] = {{{"San", "Zhang"}},{{"Si", "Li"}},{{"Wu", "Wang"}},{{"Liu", "Zhao"}}};
    for (int i = 0; i < CSIZE; i++) 
    {
        printf("请输入 %s%s 的3门成绩: ", student[i].name.first, student[i].name.last);
        scanf("%lf %lf %lf", &student[i].grade[0],&student[i].grade[1],&student[i].grade[2]);
        student[i].average = (student[i].grade[0] + student[i].grade[1] + student[i].grade[2]) / 3.0;
    }
    printf("\n成绩:\n");
    for (int i = 0; i < CSIZE; i++) 
    {
        printf("姓名: %s %s\n", student[i].name.first, student[i].name.last);
        printf("成绩: %.1f, %.1f, %.1f\n", student[i].grade[0], student[i].grade[1], student[i].grade[2]);
        printf("平均分: %.2f\n", student[i].average);
    }
    return 0;
}