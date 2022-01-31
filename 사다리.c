#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
6명이 사다리 게임을 할 때, 몇 번째 위치에서 시작하는 사람이 상품을 타는지 구하기
 - 가로줄은 항상 인접한 세로줄만 연결할 수 있음
*/
int solution(int ladders[][2], int ladders_len, int win) {
    int answer = 0;

    int player[6] = { 1, 2, 3, 4, 5, 6 };

    for (int i = 0; i < ladders_len; i++) {
        int temp = player[ladders[i][0] - 1];
        player[ladders[i][1] - 1] = player[ladders[i][0] - 1];
        player[ladders[i][0] - 1] = temp;
    }

    answer = player[win - 1];

    return answer;
}
int main() {
    int ladders[5][2] = { {1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6} };
    int ladders_len = 5;
    int win = 3;
    int ret = solution(ladders, ladders_len, win);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
