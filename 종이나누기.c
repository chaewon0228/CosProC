#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	한 줄로 서 있는 사람들에게 종이를 다음과 같은 방법으로 나누려 한다.
	- 종이 k장을 맨 앞사람에게 준다.
	- 맨 앞사람은 자신이 필요한 만큼 종이를 챙긴 후, 남은 종이를 넘긴다.
	- 이 과정을 반복해 전달할 종이가 없거나, 모든 사람이 필요한 만큼 종이를 
	  가질 때까지 계속해서 뒷사람에게 남으느 종이를 전달한다.
	
*/


int solution(int papers[], int papers_len, int K) {
    int length = papers_len;
    for (int i = 0; i < papers_len; i++) {
        K -= papers[i];
        if (K <= 0) {
            return i;
        }
    }
    return length;
}

int main() {
	int papers1[] = { 2, 4, 3, 2, 1 };
	int papers_len1 = 5;
	int K1 = 10;
	int ret1 = solution(papers1, papers_len1, K1);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret1);

	int papers2[] = { 2, 4, 3, 2, 1 };
	int papers_len2 = 5;
	int K2 = 14;
	int ret2 = solution(papers2, papers_len2, K2);

	printf("solution 함수의 반환 값은 %d 입니다.\n", ret2);
}