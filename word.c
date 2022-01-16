#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* solution(char* str) {
    char* word = (char*)malloc(sizeof(char) * 101); //word �迭 ���� �Ҵ�
    int index = 0; //�迭���� ������ ���� 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '.') word[index++] = str[i];
        //����� ��ħǥ�� �ƴϸ� word�� ���ڸ� �Ѱ��� ����
        //index�� 1�� �������Ѽ� ���� �迭������ �� �� ����
    }
    for (int i = 0; i < index / 2; i++) {
        //index�� 1�� �������ױ� ������ �迭�� ���̸� �� �� ����
        //�Ӹ���� ���ڴ� �չ��ڿ� �� �ڹ��ڸ� ���ϹǷ� ������ ������ŭ�� ����
        if (word[i] != word[index-i-1]) return false;
        //�迭�� 0���� �����ϹǷ� -1�� ���Ѿ߉�
        //���� ���� ������ false �����ϸ� �Լ� ����
    }
    return true; //��� ������ true ����
}
int main(void){
    char str[] = "racecar";
    int result;
    result = solution(str);
    if (result == true) {
        printf("�Ӹ���� �����Դϴ�.\n");
    }
    else {
        printf("�Ӹ���� ���ڰ� �ƴմϴ�.\n");
    }
    return 0;
}

