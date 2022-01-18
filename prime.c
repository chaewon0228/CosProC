#include <stdio.h>

int solution(int number) {
    int cnt = 0;
    while (number) {
        int a = number % 10;
        if (a == 2 || a == 3 || a == 5 || a == 7) cnt++;
        number /= 10;
    }
    return cnt;
}
int main() {
    int number = 29022531;
    int ret = solution(number);
    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}