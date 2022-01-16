#include <stdio.h>

int solution(int score[], int score_len) {
	int cnt = 0; //수강생 수를 구하는 변수
	for (int i = 0; i < score_len; i++) {
		//for문은 score배열의 길이만큼 돌려 조건 비교
		//점수가 650점 이상 800미만인 수강생 수를 찾아야하므로
		//두 조건 모두 만족해야되서 &&를 사용
		//두 조건 모두 만족할 시 수강생 수 1씩 증가
		if (650 <= score[i] && score[i] < 800) cnt++;
	}
	return cnt; //수강생 수 리턴
}
int main() {
	int score[] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
	int result;
	result = solution(score, 10); //result 변수에 수강생 수 반환
	printf("수강대상: %d\n", result); 
	return 0;
}