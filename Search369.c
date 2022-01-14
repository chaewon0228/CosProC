//**************************************************중요
#include <stdio.h>
int solution(int num) {
	int cnt = 0;
	int k;
	for (int i = 1; i <= num; i++) {
		k = i;
		while (k) {
			if (k % 10 == 3 || k % 10 == 6 || k % 10 == 9) cnt++;
			k = k / 10;
		}
	}
	return cnt;
}
int main() {
	int result;
	result = solution(234);
	printf("박수 횟수 : %d\n", result);
	return 0;
}