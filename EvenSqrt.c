#include <stdio.h>
int solution(int N, int M) {
	//N�� M ���̿� ¦���� ���� ���Ѵ�.
	//¦���� ���� �����ؼ� ���Ѵ�.
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
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}