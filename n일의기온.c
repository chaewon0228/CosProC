#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	n일 동안 매일매일의 평균 기온이 순서대로 들어있는 배열 temperature
	A번째 일과 B번째 일 사이에서 A, B번째 일보다 
	기온이 높았던 날은 총 며칠이었는지 구하기
*/

int solution(int temperature[], int temperature_len, int A, int B) {
    int answer = 0;
    for (int i = A; i <= B; i++) {
        if (temperature[A] < temperature[i] && temperature[B] < temperature[i]) answer++;
    }
    return answer;
}

int main() {
	int temperature[] = { 3, 2, 1, 5, 4, 3, 3, 2 };
	int temperature_len = 8;
	int A = 1;
	int B = 6;
	int ret = solution(temperature, temperature_len, A, B);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}