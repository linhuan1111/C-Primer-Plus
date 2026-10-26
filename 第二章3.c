#include<stdio.h>
int main(void)
{
    float pintuo,cup,si,tangshao,chaishao;
    scanf("%f",&cup);
    pintuo=cup/2;
    si=cup*8;
    tangshao=cup*16;
    chaishao=cup*16*3;
    printf("pintuo=%f\nsi=%f\ntangshao=%f\nchaishao=%f\n", pintuo, si, tangshao, chaishao);
    return 0;
}