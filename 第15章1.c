#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
    int ch;
    FILE *fp;
    unsigned long count = 0;
    char filename[100];
    printf("请输入文件名: ");
    scanf("%99s", filename);
    if ((fp = fopen(filename, "r")) == NULL) 
    {
        printf("Can't open %s\n", filename);
        exit(EXIT_FAILURE);
    }

    while ((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
        count++;
    }
    fclose(fp);
    printf("File %s has %lu characters\n", filename, count);
    return 0;
}