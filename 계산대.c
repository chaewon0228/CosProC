#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    XX ��Ʈ���� ������ ������ 3�� �����̸� �ҷ� ���뿡��,
    �׷��� ������ �Ϲ� ���뿡�� ����ؾ� �Ѵ�.
    ( �� ���� ��� ���� �� ���� ����ϴµ� 1�� �ɸ���. )
    ������ ���� ���� ��� �迭�� �־��� ��, ��� ������ ����ϴ� �� �ʿ��� �ð��� ������
*/
int solution(int stuffs[], int stuffs_len) {
    int answer = 0;

    int small_counter = 0;
    int general_counter = 0;

    for (int i = 0; i < stuffs_len; i++) {
        if (stuffs[i] > 3)
            general_counter += stuffs[i];
        else
            small_counter += stuffs[i];
    }

    if (small_counter < general_counter)
        answer = general_counter;
    else
        answer = small_counter;

    return answer;
}

int main() {
    int stuffs[6] = { 5, 3, 4, 2, 3, 2 };
    int stuffs_len = 6;
    int ret = solution(stuffs, stuffs_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}

