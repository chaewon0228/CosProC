#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int scores[], int scores_len, int cutline) {
	int answer = scores_len, i = 0;
	while (i < scores_len) {
		if (scores[i] < cutline) answer--;
		i++;
	}
	return answer;
}

int main() {
	int scores[5] = { 80, 90, 55, 60, 59 };
	int scores_len = 5;
	int cutline = 60;
	int ret = solution(scores, scores_len, cutline);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}