#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    XX 마트에선 구매할 물건이 3개 이하이면 소량 계산대에서,
    그렇지 않으면 일반 계산대에서 계산해야 한다.
    ( 두 계산대 모두 물건 한 개를 계싼하는데 1분 걸린다. )
    구매할 물건 수가 담긴 배열이 주어질 때, 모든 물건을 계산하는 데 필요한 시간을 구하자
*/
int solution(int stuffs[], int stuffs_len) {
    int answer = 0;

    int small_counter = 0;
    int general_counter = 0;

    for (int i = 0; i < stuffs_len; i++) {
        if (stuffs[i] > 3)
            general_counter += stuffs[i];
        else
            small_counter += stuffs[i];
    }

    if (small_counter < general_counter)
        answer = general_counter;
    else
        answer = small_counter;

    return answer;
}

int main() {
    int stuffs[6] = { 5, 3, 4, 2, 3, 2 };
    int stuffs_len = 6;
    int ret = solution(stuffs, stuffs_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}

