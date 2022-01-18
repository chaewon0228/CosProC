#include <stdio.h>
#include<stdlib.h>
int solution(int floors[], int floors_len) {
    int dist = 0;
    for (int i = 0; i < floors_len-1; i++) {
        dist += abs(floors[i] - floors[i + 1]);
    }
    return dist;
}

int main() {
    int floors[5] = { 1, 2, 5, 4, 2 };
    int floors_len = 5;
    int ret = solution(floors, floors_len);

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}