#include <stdio.h>
int solution(int data[], int data_len) {
	//변수에 배열의 값을 다 더한 후 len으로 나누어 평균을 구하고 
	//평균을 배열의 값과 비교해서 평균값보다 이하일 경우, cnt 증가하기
	int cnt = 0, sum = 0;
	double avg = 0;
	for (int i = 0; i < data_len; i++) {
		sum += data[i];
	}
	avg = sum / data_len;

	for (int i = 0; i < data_len; i++) {
		if (data[i] <= avg) cnt++;
	}
	return cnt;
}
int main() {
	int data1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int data_len1 = 10;
	int ret1 = solution(data1, data_len1);
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int data2[10] = { 1,1,1,1,1,1,1,1,1,10 };
	int data_len2 = 10;
	int ret2 = solution(data2, data_len2);
	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
	return 0;
}