#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int day, int numbers[], int numbers_len) {
	int count = 0;
	for (int i = 0; i < numbers_len; i++) {
		if (day % 2 == numbers[i] % 2) {
			count++;
		}
	}
	return count;
}
int main() {
	int day = 17;
	int numbers[] = { 3285,1724,4438,2988,3131,2998 };
	int numbers_len = 6;
	int ret = solution(day, numbers, numbers_len);
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
	return 0;
}