#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char* solution(char* words[], int words_len) {
	//words의 길이만큼 for문을 돌린다.
	//words 문자의 길이가 5이상이면 answer에 넣는다.
	char* answer = (char*)malloc(sizeof(char) * words_len * 10 + 1);
	for (int i = 0; i < words_len; i++) {
		answer[i] = NULL;
	}
	for (int i = 0; i < words_len; i++) {
		if (strlen(words[i]) >= 5) strcat(answer, words[i]);
	}
	if (strlen(answer) == 0) {
		answer = "empty";
	}
	return answer;
}
int main() {
	char* words1[5] = { "my", "favorite", "color", "is", "violet" };
	int words_len1 = 5;
	char* ret1 = solution(words1, words_len1);
	printf("solution 함수의 값은 %s 입니다.\n", ret1);

	char* words2[5] = { "yes", "i", "am" };
	int words_len2 = 3;
	char* ret2 = solution(words2, words_len2);
	printf("solution 함수의 값은 %s 입니다.\n", ret2);
}