#include <stdio.h>
char* solution(char* ch) {
	char* word = malloc(sizeof(char) * strlen(ch));
	word[0] = ch[0]; //word에 ch 저장
	int len = 0;
	for (int i = 0; i < strlen(ch); i++) {
		//i는 1로 시작, i와 i-1을 비교하여 옆 문자 체크
		if (ch[i] != ch[i + 1]) {
			word[len] = ch[i];
			len++;
		}
	}
	word[len] = NULL;
	return word;
}
int main() {
	char* characters = "senteeeencccccceeee";
	char* ret = solution(characters);

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}