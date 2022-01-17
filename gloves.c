#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
const int max_product_number = 10;
int* func_a(int gloves[], int gloves_len) {
	//�尩�� �� �迭�� ���̸�ŭ for���� ������ 
	//�� �迭�� ���̸�ŭ ���� �迭�� gloves�� �迭���� ++�ϸ� ����
	int* cuple = (int*)malloc(sizeof(gloves) * max_product_number);
	for (int i = 0; i < max_product_number; i++) {
		cuple[i] = 0;
	}
	for (int i = 0; i < gloves_len; ++i) {
		cuple[gloves[i]]++;
	}
	return cuple;
}
int min1(int a, int b) {
	return a < b ? a : b;
}
int solution(int left_gloves[], int left_gloves_len, int right_gloves[], int right_gloves_len) {
	int* left_counter = func_a(left_gloves, left_gloves_len);
	int* right_counter = func_a(right_gloves, right_gloves_len);
	int total = 0;
	for (int i = 1; i <= max_product_number; ++i) {
		total += min1(left_counter[i], right_counter[i]);
	}
	return total;
}
int main() {
	int left_gloves[5] = { 2,1, 2,2,4};
	int left_gloves_len = 5;
	int right_gloves[6] = { 1,2,2,4,4,7 };
	int right_gloves_len = 6;
	int ret = solution(left_gloves, left_gloves_len, right_gloves, right_gloves_len);
	printf("solution �Լ��� ��ȯ ���� %d �Դϴ�.\n", ret);
	return 0;
}