#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	�پ��� ���� ���� �縻 �� ���� ���� ���� �縻�� 2���� ���� �� ���� ����� �Ѵ�.
	�縻�� �� �� ���� �� �ִ��� ������.

	(EX - ������ �ִ� �縻�� ���� [����,�Ķ�,����,���,�Ķ�,����]�̶��
		  2�� ���� �� �ִ�. )
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

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}
