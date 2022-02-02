#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	덩치를 수치로 표현할 때, 주문해야 하는 유니폼의 사이즈는 다음과 같다.
    - 95 미만 : S
    - 95 이상 100 미만 : M
    - 100 이상 105 미만 : L
    - 105 이상 : XL

    주문해야 하는 유니폼 사이즈의 수를 [S, M, L, XL] 순으로 배열에 담아 리턴한다.
*/

int* solution(int people[], int people_len) {
    int* answer = (int*)malloc(sizeof(int) * 4);
    memset(answer, 0, sizeof(int) * 4);
    for (int i = 0; i < people_len; i++) {
        if (people[i] < 95) answer[0]++;
        else if (people[i] < 100) answer[1]++;
        else if (people[i] < 105) answer[2]++;
        else answer[3]++;
    }
    return answer;
}

int main() {
    int people[] = { 97, 102, 93, 100, 107 };
    int people_len = 5;
    int* ret = solution(people, people_len);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 4; i++) {
        if (i != 0)
            printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}