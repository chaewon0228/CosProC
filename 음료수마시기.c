#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	X마트에서 빈 병 n개와 음료수 한 병을 교환해준다.
	가진 돈 money, 음료수 한 병의 가격 price, 음료수 한 병과 교환하는데 필요한 빈병의 수 n이 주어질 때, 
	마실 수 있는 총 음료수의 수를 구하자.

	(EX- 현재 가진 돈이 8원, 음료수 한 병은 2원이고 n이 4라면 음료수 4개를 살 수 있다.
		 음료수 네개를 다 마신 후, 남은 빈 병 4개를 가져가면 음료수 한 병을 더 받을 수 있다.
		 따라서 8원으로 음료수를 총 5병 마실 수 있다.)
*/


int solution(int money, int price, int n) {
    int answer = 0;

    int empty_bottle = answer = money / price;
    while (n <= empty_bottle) {
        empty_bottle = empty_bottle % n;
        answer++;
        empty_bottle++;
    }

    return answer;
}

int main() {
	int money1 = 8;
	int price1 = 2;
	int n1 = 4;
	int ret1 = solution(money1, price1, n1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int money2 = 6;
	int price2 = 2;
	int n2 = 2;
	int ret2 = solution(money2, price2, n2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}