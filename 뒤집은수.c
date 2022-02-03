#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	 주어진 수와 주어진 수를 뒤집은 수와의 차를 구하려 한다.
	 1. 주어진 수의 자릿수를 구한다.
	 2. 구한 자릿수를 이용해 주어진 수를 거꾸로 뒤집는다.
	 3. 주어진 수와 뒤집은 수의 차이를 구한다.

	 (EX - 주어진 수가 120인 경우 이를 뒤집으면 021이다.
		   십진수에서 앞의 0은 제거해야하므로 120을 뒤집은 수는 21이다.
		   따라서 120 - 21 = 99이다.
*/
int func_a(int number1, int number2) {
	int ret = 0;

	if (number1 > number2)
		ret = number1 - number2;
	else
		ret = number2 - number1;

	return ret;
}

int func_b(int number) {
	int ret = 0;

	while (number != 0) {
		number = number / 10;
		ret++;
	}

	return ret;
}

int func_c(int number, int digit) {
	int ret = 0;

	for (int i = 0; i < digit; i++) {
		int temp = number % 10;
		number = number / 10;
		ret = ret * 10 + temp;
	}

	return ret;
}

int main() {
	int number1 = 120;
	int ret1 = solution(number1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int number2 = 23;
	int ret2 = solution(number2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}
