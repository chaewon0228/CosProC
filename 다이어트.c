#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int calorie[], int calorie_len) {
	int min = calorie[0];
	int answer = 0;
	for (int i = 0; i < calorie_len; i++) {
		if (min < calorie[i]) {
			answer += calorie[i] - min;
		}else {
			min = calorie[i];
		}
	}
	return answer;
}
int main() {
	int calorie[] = { 713,665,873,500,751 };
	int ret = solution(calorie, 5);
	printf("solution함수의 반환값은 %d 입니다.\n", ret);
}