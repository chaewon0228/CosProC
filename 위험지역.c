#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
	int count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i > 0 && height[i - 1][j] < height[i][j]) continue; //���ʺ��� ũ��
			else if (i < 3 && height[i + 1][j] < height[i][j]) continue; //�Ʒ���
			else if (j > 0 && height[i][j - 1] < height[i][j]) continue; //����
			else if (j < 3 && height[i][j + 1] < height[i][j]) continue; //������
			else count++;
		}
	}
	return count;
}

int main() {
	int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
	int height_len = 4;
	int ret = solution(height, height_len = 4);

	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
}