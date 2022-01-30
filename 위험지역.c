#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int height[][4], int height_len) {
	int count = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			if (i > 0 && height[i - 1][j] < height[i][j]) continue; //위쪽보다 크면
			else if (i < 3 && height[i + 1][j] < height[i][j]) continue; //아래쪽
			else if (j > 0 && height[i][j - 1] < height[i][j]) continue; //왼쪽
			else if (j < 3 && height[i][j + 1] < height[i][j]) continue; //오른쪽
			else count++;
		}
	}
	return count;
}

int main() {
	int height[4][4] = { {3, 6, 2, 8}, {7, 3, 4, 2}, {8, 6, 7, 3}, {5, 3, 2, 9} };
	int height_len = 4;
	int ret = solution(height, height_len = 4);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}