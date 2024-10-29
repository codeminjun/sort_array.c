#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    int j,len;
    int i=0;
    char num[100];
    char *new[100];
    char *token;

    printf("문자열을 입력하세요: ");
    fgets(num,sizeof(num),stdin);
    num[strcspn(num,"\n")] = '\0';

    token = strtok(num," ");
    while(token != NULL){
        new[i] = token;
        i++;
        token = strtok(NULL," ");
    }
}