#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
    �ҷ� ��� ���ڰ� �� �ڽ����� �˾ƺ��� �Ѵ�.
    ��� �� �ڽ��� ǥ�� ���Դ� weight�̸�, ǥ�� ���Կ� ����
    ���԰� ���� 10% �̳��� ��� �ڽ��� ����ǰ����, ������ �׺��� ���� ��� �ڽ��� �ҷ�ǰ���� �����Ѵ�.
    �ҷ�ǰ�� ������ ������.

    (EX - ǥ�� ���԰� 600�̸� ���԰� 540�̻� 660������ ��� ���ڸ� ����ǰ�̴�. )
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

    printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}