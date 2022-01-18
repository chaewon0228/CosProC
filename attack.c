#include <stdio.h>

int solution(int attack, int recovery, int hp) {
    int count = 0;
    while (1) {
        count += 1;
        hp -= attack;
        if (hp <= 0)
            break;
        hp += recovery;
    }
    return count;
}
int main() {
    int attack = 30;
    int recovery = 10;
    int hp = 60;
    int ret = solution(attack, recovery, hp);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}