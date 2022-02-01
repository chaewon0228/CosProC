#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    n���� �ð�ǥ�� ���� ���� �ٹ��� ����.
    �ٹ� ������ ù ��° ������� n��° ��� ������ �Ѵ�.
    �̶�, ���� ���� ���� ����� ��ð� ���ߴ��� ������.
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

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    int time_table2[] = { 4, 8, 2, 5, 4, 6, 7 };
    int time_table_len2 = 7;
    int n2 = 4;
    int ret2 = solution(time_table2, time_table_len2, n2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}