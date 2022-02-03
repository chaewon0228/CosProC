#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	 �־��� ���� �־��� ���� ������ ������ ���� ���Ϸ� �Ѵ�.
	 1. �־��� ���� �ڸ����� ���Ѵ�.
	 2. ���� �ڸ����� �̿��� �־��� ���� �Ųٷ� �����´�.
	 3. �־��� ���� ������ ���� ���̸� ���Ѵ�.

	 (EX - �־��� ���� 120�� ��� �̸� �������� 021�̴�.
		   ���������� ���� 0�� �����ؾ��ϹǷ� 120�� ������ ���� 21�̴�.
		   ���� 120 - 21 = 99�̴�.
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

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret1);

	int number2 = 23;
	int ret2 = solution(number2);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret2);
}
