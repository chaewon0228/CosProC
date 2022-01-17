#include <stdio.h>

char* solution(char* word[], size_t words_m) {
    char* ch = (char*)malloc(sizeof(char) * words_m * 10 + 1);
    ch[0] = 0;
    for (int i = 0; i < words_m; ++i) {
        if (strlen(word[i]) >= 5) {
            strcat(ch, word[i]);
        }
        if (strlen(ch) == 0) ch = "empty";
    }
    return ch;

}