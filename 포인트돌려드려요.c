#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int point) {
	if (point >= 1000) return point / 100 * 100;
	else return 0;
}
int main() {
	int point = 2323;
	int ret = solution(point);
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}