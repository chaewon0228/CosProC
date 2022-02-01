#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    ���� ������ ���� �л��� ������ �ű��.
    ������ ������ ������ ���� �� ���� ���� ������ �ű��.
*/
int* solution(int score[], int score_len) {
	int* answer = (int*)malloc(sizeof(int) * score_len);

	for (int i = 0; i < score_len; i++) {
		int rank = 1;
		for (int j = 0; j < score_len; j++) {
			if (i == j) continue;
			int now = score[i];
			int other = score[j];
			if (other > now)  rank++;
		}
		answer[i] = rank;
	}
	return answer;
}

int main() {
    int score1[] = { 90, 87, 87, 23, 35, 28, 12, 46 };
    int score_len1 = 8;
    int* ret1 = solution(score1, score_len1);

    printf("solution �Լ��� ��ȯ ���� [");
    for (int i = 0; i < score_len1; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret1[i]);
    }
    printf("] �Դϴ�.\n");

    int score2[] = { 10, 20, 20, 30 };
    int score_len2 = 4;
    int* ret2 = solution(score2, score_len2);

    printf("solution �Լ��� ��ȯ ���� [");
    for (int i = 0; i < score_len2; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret2[i]);
    }
    printf("] �Դϴ�.\n");
}