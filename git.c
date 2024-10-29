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
    char *temp;

    printf("문자열을 입력하세요: ");
    fgets(num,sizeof(num),stdin);
    num[strcspn(num,"\n")] = '\0';

    token = strtok(num," ");
    while(token != NULL){
        new[i] = token;
        i++;
        token = strtok(NULL," ");
    }
    len = i;
    for(i=0;i<len-1;i++)
        for(j=0;i<len-1-i;j++){
        
        if(new[j]>new[j+1]){
            temp = new[j];
            new[j] = new[j+1];
            new[j+1] = temp;
        }
    }
}