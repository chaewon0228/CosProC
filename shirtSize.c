#include <stdio.h>
#include <string.h>

int* solution(char *shirt_size[], int len) {
	int* shirt = (int*)malloc(sizeof(int) * len);
	//"XS", "S","M", "L", "XL", "XXL"
	for (int i = 0; i < len; i++) {
		shirt[i] = 0;
	}
	for (int i = 0; i < len; i++) {
		if (strcmp(shirt_size[i], "XS") == 0 ) shirt[0]++;
		else if(strcmp(shirt_size[i], "S") == 0) shirt[1]++;
		else if (strcmp(shirt_size[i], "M") == 0) shirt[2]++;
		else if (strcmp(shirt_size[i], "L") == 0) shirt[3]++;
		else if (strcmp(shirt_size[i], "XL") == 0) shirt[4]++;
		else shirt[5]++;
	}
	return shirt;
}
int main() {
	char *shirt_size[6] = {"XS", "S","L","L","XL","S"};
	int* result;
	result = solution(shirt_size, 6);
	for (int i = 0; i < 6; i++) {
		printf("%d\n", result[i]);
	}
	return 0;
}