#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    불량 사과 상자가 몇 박스인지 알아보려 한다.
    사과 한 박스의 표준 무게는 weight이며, 표준 무게와 비교해
    무게가 오차 10% 이내인 사과 박스는 정상품으로, 오차가 그보다 많은 사과 박스는 불량품으로 판정한다.
    불량품의 개수를 구하자.

    (EX - 표준 무게가 600이면 무게가 540이상 660이하인 사과 상자만 정상품이다. )
*/
int solution(int weight, int boxes[], int boxes_len) {
    int answer = 0;
    for (int i = 0; i < boxes_len; i++)
        if (!(boxes[i] - weight / 10 <= weight && boxes[i] + weight / 10 >= weight))
            answer++;
    return answer;
}

int main() {
    int weight = 600;
    int boxes[5] = { 653, 670, 533, 540, 660 };
    int boxes_len = 5;
    int ret = solution(weight, boxes, boxes_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}