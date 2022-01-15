#include <stdio.h>
#include <string.h>
int* solution(int a[], int len) {
	int right = len - 1, left = 0;
	//int *b = (int*)malloc(sizeof(int)*len);
	/*for(int i=0; i<len; i++){
		b[i] = a[i];
	}*/
	while (right > left) {
		int temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		right = right - 1;
		left = left + 1;
	}
	return a;
}
int main() {
	int a[5] = { 1,2,3,4,5 };
	int* result = solution(a, 5);
	for (int i = 0; i < 5; i++) {
		printf("%d ", result[i]);
	}
	return 0;
}