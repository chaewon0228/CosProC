#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* 
* a일장과 b일장 제도를 시행할 때, 정수 a, b가 주어진다.
* a일장과 b일장이 같이 열리는 날이 며칠에 한 번씩 있는지 구하기
*/
int solution(int a, int b) {
    int answer = 0;

    for (int i = 1; i <= b; i++) {
        if ((a * i) % b == 0) {
            answer = a * i;
            break;
        }
    }

    return answer;
}

int main() {
    int a = 4;
    int b = 6;
    int ret = solution(a, b);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}