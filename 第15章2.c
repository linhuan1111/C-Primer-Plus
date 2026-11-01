#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void) 
{
    FILE *in, *out;
    int ch;
    char infile[100]; 
    char outfile[120];
    printf("请输入要转换的文本文件名 (例如 test.txt): ");
    scanf("%99s", infile);
    strcpy(outfile, infile); 
    strcat(outfile, "_upper.txt"); 
    if ((in = fopen(infile, "r")) == NULL) 
    {
        printf("无法打开原文件 %s\n", infile);
        exit(EXIT_FAILURE);
    }
    if ((out = fopen(outfile, "w")) == NULL) 
    {
        printf("无法创建输出文件 %s\n", outfile);
        fclose(in); 
        exit(EXIT_FAILURE);
    }
    while ((ch = getc(in)) != EOF) 
    {
        putc(toupper(ch), out); 
    }
    printf("已生成新文件: %s\n", outfile);
    fclose(in);
    fclose(out);
    return 0;
}