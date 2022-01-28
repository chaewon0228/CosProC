#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int tile_length) {
    char* answer = (char*)malloc(sizeof(char) * (tile_length + 1));
    char com[6] = { 'R','R','R','G','G','B' };
    if (tile_length % 6 == 4 || tile_length%6 == 1 || tile_length%6 == 1) {
        answer = "-1";
    }
    else {
        for (int i = 0; i < tile_length; i++)
            answer[i] = com[i % 6];
        answer[tile_length] = '\0';
    }
    return answer;
}int main() {
    int tile_length1 = 11;
    char* ret1 = solution(tile_length1);
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret1);

    int tile_length2 = 16;
    char* ret2 = solution(tile_length2);
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret2);
}