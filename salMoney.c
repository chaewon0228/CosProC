#include <stdio.h>
#include <string.h>
int solution(int money, char *grade) {
	//int* answer = (int*)malloc(sizeof(int) * len);
	int result = 0;
	if (grade == "S") {
		result = money - (int)(money * 0.05);
	}
	else if (grade == "G") {
		result = money - (int)(money * 0.1);
	}
	else if (grade == "V") {
		result = money - (int)(money * 0.15);
	}
	return result;
}
int main() {
	//char *grade[3] = {"S", "G", "V"};
	int result = solution(2500, "V");
	printf("할인 금액 : %d\n", result);
	return 0;
}