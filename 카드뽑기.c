#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    ī�� 3���� �̾� ������ ���� ������ �Ѵ�.
    �� ī��� ���� ĥ���� �ְ� ���ڰ� ���� �ִ�.
    * ȹ���� ������ ����ϴ� ��Ģ
    - ī�� 3���� ���� ��� ���ٸ� ȹ���� ������ ���� ������ ���տ� 3�� ���� ���̴�.
    - ī�� 2���� ���� ����, 1���� ���� �ٸ��ٸ� ȹ���� ������ ���� ������ ���տ� 2�� ���� ���̴�.
    - ī�� 3���� ���� ��� �ٸ��ٸ� ȹ���� ������ ���� ������ �����̴�.

    ���� ī���� ���� ���ڸ� ���ڿ��� ���� 2���� �迭�� �־��� ��, ȹ���� �� ���� ���ϱ�!
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

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

    char* cards2[][2] = { {"blue", "2"}, {"blue", "5"}, {"black", "3"} };
    int cards_len2 = 3;
    int ret2 = solution(cards2, cards_len2);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}