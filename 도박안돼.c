#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

//번갈아 가면서 카드 뽑기
char* func_a(char* bundle, int start, int n) {
    char* answer = (char*)malloc(sizeof(char) * n);
    for (int i = 0; i < n; i++)
        answer[i] = bundle[start + i * 2];
    return answer;
}
//누가 이겼는지 반환하는 함수 //0 : 무승부, 1 : A가 이김, 2 : B가 이김 
int* func_b(int score1, int score2) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    if (score1 > score2) {
        answer[0] = 1;
        answer[1] = score1;
    }
    else if (score1 < score2) {
        answer[0] = 2;
        answer[1] = score2;
    }
    else {
        answer[0] = 0;
        answer[1] = score1;
    }
    return answer;
}

//카드 점수 구하기 //a는 1점, b는 2점, c는 3점
int func_c(char* card, int card_length) {
    int answer = 0;
    for (int i = 0; i < card_length; i++) {
        answer += card[i] - 'a' + 1;
    }
    return answer;
}

int solution(int n, char* bundle) {
    char* a_cards = func_a(bundle, 0, n);
    char* b_cards = func_a(bundle, 1, n);
    int a_score = func_c(a_cards, n);
    int b_score = func_c(b_cards, n);
    int* answer = func_b(a_score, b_score);
    return answer;
}
int main() {
    int n = 4;
    char* bundle = "cacdbdedccbb";
    int* ret = solution(n, bundle);

    printf("solution 함수의 반환 값은 [");
    for (int i = 0; i < 2; i++) {
        if (i != 0) printf(", ");
        printf("%d", ret[i]);
    }
    printf("] 입니다.\n");
}