#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int solution(int purchase[], int purchase_len) {
	// 상품권 총액 구하기
	int total = 0;
	for (int i = 0; i < purchase_len; i++) {
		if (purchase[i] >= 1000000) {
			total += 50000;
		}
		else if (purchase[i] >= 600000) {
			total += 30000;
		}
		else if (purchase[i] >= 400000) {
			total += 20000;
		}
		else if (purchase[i] >= 200000) {
			total += 10000;
		}
	}
	return total;
}
int main() {
	int purchase[5] = { 150000,210000,399990, 990000, 1000000 };
	int purchase_len = 5;
	int ret = solution(purchase, purchase_len);
	printf("solution 함수의 반환 값은 %d 입니다. \n\n", ret);
}