#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


int solution(int usage) {
    int answer = 0;

    if (usage > 30)
        answer += 20 * 430 + 10 * 570 + (usage - 30) * 840;
    else if (usage > 20)
        answer += 20 * 430 + (usage - 20) * 570;
    else
        answer += usage * 430;

    return answer;
}

int main() {
    int usage = 35;
    int ret = solution(usage);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}
