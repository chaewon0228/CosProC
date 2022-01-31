#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 수업 시간표가 주어질 때, 공강이 총 몇 시간인지 구하기
int func_a(int time_table[], int time_table_len) {
    int answer = 0;
    for (int i = time_table_len - 1; i >= 0; i--) {
        if (time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

int func_b(int time_table[], int class1, int class2) {
    int answer = 0;
    for (int i = class1; i < class2; i++)
        if (time_table[i] == 0)
            answer++;
    return answer;
}

int func_c(int time_table[], int time_table_len) {
    int answer = 0;
    for (int i = 0; i < time_table_len; i++) {
        if (time_table[i] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}