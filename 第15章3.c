#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 256
int main(int argc, char *argv[]) 
{
    FILE *fp;
    char line[MAX_LEN];
    if (argc != 3) 
    {
        printf("用法: %s <要查找的字符串> <文件名>\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    char *target = argv[1];
    char *filename = argv[2];
    if ((fp = fopen(filename, "r")) == NULL) 
    {
        printf("无法打开文件 %s\n", filename);
        exit(EXIT_FAILURE);
    }
    printf("--- 在文件 %s 中查找 \"%s\" 的结果 ---\n", filename, target);
    while (fgets(line, MAX_LEN, fp) != NULL)
    {
        if (strstr(line, target) != NULL) 
        {
            printf("%s", line); 
        }
    }
    fclose(fp);
    return 0;
}