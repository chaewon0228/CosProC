#include <stdio.h>

int func_a(int arr[], int arr_len) { //5의 배수 개수 
	int count = 0;
	for (int i = 0; i < arr_len; ++i) {
		if (arr[i] % 5 == 0) count++;
	}
	return count;
}
char* func_b(int three, int five) { //개수 비교
	if (three > five) return "three";
	else if (three < five) return "five";
	else return "same";
}
int func_c(int arr[], int arr_len) { //3의 배수 개수 
	int count = 0;
	for (int i = 0; i < arr_len; ++i) {
		if (arr[i] % 3 == 0) count++;
	}
	return count;
}
char* solution(int arr[], int arr_len) {
	int three = func_c(arr, arr_len);
	int five = func_a(arr, arr_len);
	int result = func_b(three, five);
	return result;
}
int main() {
	int arr[10] = { 2, 3, 6, 9, 12, 15, 10, 20, 22, 25 };
	int arr_len = 10;
	char* ret = solution(arr, arr_len);
	printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}