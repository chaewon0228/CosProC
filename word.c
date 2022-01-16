#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* solution(char* str) {
    char* word = (char*)malloc(sizeof(char) * 101); //word 배열 동적 할당
    int index = 0; //배열방을 변경할 변수 
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '.') word[index++] = str[i];
        //공백과 마침표가 아니면 word에 문자를 한개씩 저장
        //index를 1씩 증가시켜서 다음 배열방으로 갈 수 있음
    }
    for (int i = 0; i < index / 2; i++) {
        //index를 1씩 증가시켰기 때문에 배열의 길이를 알 수 있음
        //팰린드롬 문자는 앞문자와 맨 뒤문자만 비교하므로 길이의 반절만큼만 돌림
        if (word[i] != word[index-i-1]) return false;
        //배열은 0부터 시작하므로 -1을 시켜야됌
        //서로 같지 않으면 false 리턴하며 함수 종료
    }
    return true; //모두 같으면 true 리턴
}
int main(void){
    char str[] = "racecar";
    int result;
    result = solution(str);
    if (result == true) {
        printf("팰린드롬 문자입니다.\n");
    }
    else {
        printf("팰린드롬 문자가 아닙니다.\n");
    }
    return 0;
}

