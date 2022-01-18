#include <stdio.h>

int solution(int value, char* unit) {
    int converted = 0;
    if (unit[0] == 'C') {
        converted = value * 1.8 + 32;
    }
    else if (unit[0] == 'F') {
        converted = (value - 32) / 1.8;
    }
    return converted;
}
int main() {
    int value = 527;
    char* unit = "C";
    int ret = solution(value, unit);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);

    value = 980;
    unit = "F";
    ret = solution(value, unit);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}