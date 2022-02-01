#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* 
* a����� b���� ������ ������ ��, ���� a, b�� �־�����.
* a����� b������ ���� ������ ���� ��ĥ�� �� ���� �ִ��� ���ϱ�
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

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}