#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	다양한 색을 가진 양말 중 같은 색을 가진 양말을 2개씩 묶어 한 쌍을 만들려 한다.
	양말을 몇 쌍 만들 수 있는지 구하자.

	(EX - 가지고 있는 양말의 색이 [빨강,파랑,빨강,노랑,파랑,빨강]이라면
		  2쌍 만들 수 있다. )
*/
int solution(int socks[], int socks_len) {
	int answer = 0;
	int* count = (int*)malloc(sizeof(int) * 10);
	memset(count, 0, sizeof(int) * 10);

	for (int i = 0; i < socks_len; i++)
		count[socks[i] - 1]++;

	for (int i = 0; i < 10; i++)
		answer += (count[i] % 2);

	return answer;
}

int main() {
	int socks[] = { 1, 2, 1, 3, 2, 1 };
	int socks_len = 6;
	int ret = solution(socks, socks_len);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
