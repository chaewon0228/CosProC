#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(char* schedule[], int schedule_len) {
    int* answer = (int*)malloc(sizeof(int) * schedule_len);
    int j = 0;
    for (int i = 0; i < schedule_len; i++) {
        if (schedule[i][0] == 'X') {
            answer[j++] = i + 1;
        }
    }
    return answer;
}
int main() {
    char* schedule[] = { "O", "X", "X", "O", "O", "O", "X", "O", "X", "X" };
    int* ret = solution(schedule, 10);
    
    printf("solution 함수의 반환 값은 ");
    for (int i = 0; i < 5; i++) {
        printf("%d, ", ret[i]);
    }
    printf("입니다.");

}