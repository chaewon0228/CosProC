#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*
	X사이트에서는 회원가입을 할 때, 다음의 규칙을 지켜 비밀번호를 생성해야 한다.
	- 한 개 이상의 알파벳 대문자를 포함
	- 두 개 이상의 알파벳 소문자를 포함
	- 두 개 이상의 숫자를 포함

	생성가능한 비밀번호이면 true, 아니면 false를 리턴하자.
*/

bool solution(char* password) {
	bool answer;

	int capital_count = 0, small_count = 0, digit_count = 0;
	for (int i = 0; i < strlen(password); i++) {
		if (password[i] >= 'A' && password[i] <= 'Z')
			capital_count++;
		else if (password[i] >= 'a' && password[i] <= 'z')
			small_count++;
		else if (password[i] >= '0' && password[i] <= '9')
			digit_count++;
	}

	if (capital_count >= 1 && small_count >= 1 && digit_count >= 1)
		answer = true;
	else
		answer = false;

	return answer;
}

int main() {
	char* password1 = "helloworld";
	bool ret1 = solution(password1);

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret1 ? "true" : "false");

	char* password2 = "Hello123";
	bool ret2 = solution(password2);

	printf("solution 함수의 반환 값은 %s 입니다.\n", ret2 ? "true" : "false");
}