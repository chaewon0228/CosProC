#include <stdio.h>
char* solution(char* ch) {
	char* word = malloc(sizeof(char) * strlen(ch));
	word[0] = ch[0]; //word�� ch ����
	int len = 0;
	for (int i = 0; i < strlen(ch); i++) {
		//i�� 1�� ����, i�� i-1�� ���Ͽ� �� ���� üũ
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

	printf("solution �Լ��� ��ȯ ���� %s �Դϴ�.\n", ret);
}