#include <stdio.h>
int* func_a(int arr[], int arr_len) {
    int* counter = (int*)malloc(sizeof(int) * 1001);
    for (int i = 0; i < 1001; i++)
        counter[i] = 0;
    for (int i = 0; i < arr_len; i++)
        counter[arr[i]]++;
    return counter;
}
int func_b(int con[], int arr_len) {
    int ret = 0;
    for (int i = 0; i < arr_len; i++) {
        if (ret < con[i])
            ret = con[i];
    }
    return ret;
}
int func_c(int con[], int arr_len) {
    const int INF = 1001;
    int ret = INF;
    for (int i = 0; i < arr_len; i++) {
        if (con[i] != 0 && ret > con[i]) ret = con[i];
    }
    return ret;
}
int solution(int arr[], int arr_len) {
	int* counter = func_a(arr, arr_len);
	int max_count = func_b(counter, 1001);
	int min_count = func_c(counter, 1001);
	return max_count / min_count;
}
int main() {
	int a[10] = { 1,2,3,3,1,3,3,2,3,2 };
	int result;
	result = solution(a, 10);
	printf("°á°ú : %d\n", result);
	return 0;
}