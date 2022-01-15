#include <stdio.h>
int func_a(int month, int day) {
	int mon[] = { 31, 28, 31, 30,31,30,31,31,30,31,30,31 };
	int d_day=0;
	for (int i = 0; i < month - 1; i++) {
		d_day += mon[i];
	}
	d_day += day;
	return d_day-1;
}
int solution(int start_month, int start_day, int end_month, int end_day) {
	int start_total = func_a(start_month, start_day);
	int end_total = func_a(end_month, end_day);
	return end_total - start_total;
}
int main() {
	int result;
	result = solution(1, 2, 2, 2);
	printf("ÀÏ¼ö : %d\n", result);
	return 0;
}