#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    n명이 시간표에 따라 교대 근무에 들어간다.
    근무 순번은 첫 번째 사람부터 n번째 사람 순으로 한다.
    이때, 가장 오래 일한 사람이 몇시간 일했는지 구하자.
*/

int solution(int time_table[], int time_table_len, int n) {
    int answer = 0;
    int* time = (int*)malloc(sizeof(int) * n);
    for (int i = 0; i < time_table_len; i++) {
        time[i % n] += time_table[i];
    }
    for (int i = 0; i < sizeof(time) / sizeof(int); i++) {
        if (time[i] > answer) answer = time[i];
    }
    return answer;
}

int main() {
    int time_table1[] = { 1, 5, 1, 9 };
    int time_table_len1 = 4;
    int n1 = 3;
    int ret1 = solution(time_table1, time_table_len1, n1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    int time_table2[] = { 4, 8, 2, 5, 4, 6, 7 };
    int time_table_len2 = 7;
    int n2 = 4;
    int ret2 = solution(time_table2, time_table_len2, n2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}