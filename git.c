#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int i,j,len;
    char num[100];
    char *token;

    printf("문자열을 입력하세요: ");
    fgets(num,sizeof(num),stdin);
    num[strcspn(num,"\n")] = '\0';
}