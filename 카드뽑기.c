#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    카드 3장을 뽑아 점수를 내는 게임을 한다.
    각 카드는 색이 칠해져 있고 숫자가 적혀 있다.
    * 획득한 점수를 계산하는 규칙
    - 카드 3장의 색이 모두 같다면 획득한 점수는 적힌 숫자의 총합에 3을 곱한 값이다.
    - 카드 2장의 색이 같고, 1장의 색이 다르다면 획득한 점수는 적힌 숫자의 총합에 2를 곱한 값이다.
    - 카드 3장의 색이 모두 다르다면 획득한 점수는 적힌 숫자의 총합이다.

    뽑은 카드의 색과 숫자를 문자열로 담은 2차원 배열이 주어질 때, 획득한 총 점수 구하기!
*/

int solution(char* cards[][2], int cards_len) {
    int answer = 0;
    int count = 0;

    if (!strcmp(cards[0][0], cards[1][0])) count++;
    else if (!strcmp(cards[1][0], cards[2][0])) count++;
    else if (!strcmp(cards[0][0], cards[2][0])) count++;

    for (int i = 0; i < cards_len; i++) {
        answer += atoi(cards[i][1]);
    }

    if (count >= 3)
        answer *= 3;
    else if (count >= 1)
        answer *= 2;

    return answer;
}

int main() {
    char* cards1[][2] = { {"blue", "2"}, {"red", "5"}, {"black", "3"} };
    int cards_len1 = 3;
    int ret1 = solution(cards1, cards_len1);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

    char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
    int cards_len2 = 3;
    int ret2 = solution(cards2, cards_len2);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}