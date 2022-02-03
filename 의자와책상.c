#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	의자와 책상을 사려고 할 때, 가격의 합이 가장 크게 사려고 한다.
	예산으로 감당할 수 있는 의자와 책상 가격 합의 최댓값을 리턴하자.

	(EX - 돈 7원을 가지고 있고 의자의 가격이 [2,5], 책상의 가격이 [4,3,5]일 때,
		  첫번째 의자와 세번째 책상을 구매하면 가격의 합이 가장 크다. )
*/

int solution(int money, int chairs[], int chairs_len, int desks[], int desks_len) {
    int answer = 0;

    for (int i = 0; i < chairs_len; i++) {
        for (int j = 0; j < desks_len; j++) {
            int price = chairs[i] + desks[j];
            if (answer < price && price <= money)
                answer = price;
        }
    }

    return answer;
}

int main() {
	int money1 = 7;
	int chairs1[] = { 2, 5 };
	int chairs_len1 = 2;
	int desks1[] = { 4, 3, 5 };
	int desks_len1 = 3;
	int ret1 = solution(money1, chairs1, chairs_len1, desks1, desks_len1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int money2 = 7;
	int chairs2[] = { 3 };
	int chairs_len2 = 1;
	int desks2[] = { 5 };
	int desks_len2 = 1;
	int ret2 = solution(money2, chairs2, chairs_len2, desks2, desks_len2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}