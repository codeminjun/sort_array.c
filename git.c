#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    int j, len;
    int i = 0;
    char num[100];
    char *new[100];
    char *token;
    char *temp;

    printf("문자열을 입력하세요: ");
    fgets(num, sizeof(num), stdin);
    num[strcspn(num, "\n")] = '\0';  // 개행 문자 제거

    // 문자열을 공백을 기준으로 분할하여 new 배열에 저장
    token = strtok(num, " ");
    while (token != NULL) {
        new[i] = token;
        i++;
        token = strtok(NULL, " ");
    }
    len = i;

    // 버블 정렬로 문자열 사전 순으로 정렬
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (strcmp(new[j], new[j + 1]) > 0) {  // 문자열 비교
                temp = new[j];
                new[j] = new[j + 1];
                new[j + 1] = temp;
            }
        }
    }

    // 정렬된 문자열 출력
    for (i = 0; i < len; i++) {
        printf("%s ", new[i]);
    }
    printf("\n");

    return 0;
}