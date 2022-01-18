#include <stdio.h>
int solution(int N, int M) {
	//N과 M 사이에 짝수의 값을 구한다.
	//짝수의 값을 제곱해서 더한다.
	int sum = 0;
	for (int i = N; i <= M; i++) {
		if (i % 2 == 0) sum += i * i;
	}
	return sum;
}
int main() {
	int N = 4;
	int M = 7;
	int ret = solution(N, M);
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}