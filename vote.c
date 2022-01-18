#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int votes[], int votes_len, int N, int K) {
    // counter에 뽑은 번호 더하고 K 찾기
	int counter[11] = { 0 };
    int answer = 0;
    for (int i = 0; i < votes_len; i++) {
        counter[votes[i]] += 1; // 뽑은 번호 더해주기
    }
    for (int i = 1; i <= N; i++) {
        if (counter[i] == K) answer += 1;
    }
	return answer;
}
int main() {
    int votes[10] = { 2, 5, 3, 4, 1, 5, 1, 5, 5, 3 };
    int votes_len = 10;
    int N = 5;
    int K = 2;
    int ret = solution(votes, votes_len, N, K);
    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}