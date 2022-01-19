#include <stdio.h>
#include <stdlib.h>

int func_a(int current_grade[], int last_grade[], int rank[], int arr_length, int max_diff_grade) {
    int count = 0;
    for (int i = 0; i < arr_length; i++) {
        if (current_grade[i] >= 80 && rank[i] <= arr_length / 10)
            count++;
        else if (current_grade[i] >= 80 && rank[i] == 1)
            count++;
        else if (max_diff_grade == current_grade[i] - last_grade[i])
            count++;
    }
    return count;
}

int* func_b(int current_grade[], int arr_length) {
    int* rank = (int*)malloc(sizeof(int) * arr_length);
    for (int i = 0; i < arr_length; i++)
        rank[i] = 1;
    for (int i = 0; i < arr_length; i++)
        for (int j = 0; j < arr_length; j++)
            if (current_grade[i] < current_grade[j])
                rank[i]++;
    return rank;
}

int func_c(int current_grade[], int last_grade[], int arr_length) {
    int max_diff_grade = 1;
    for (int i = 0; i < arr_length; i++) {
        if (max_diff_grade < current_grade[i] - last_grade[i])
            max_diff_grade = current_grade[i] - last_grade[i];
    }
    return max_diff_grade;
}
int solution(int current_grade[], int current_grade_len, int last_grade[], int last_grade_len) {
    int arr_length = current_grade_len;
    int* rank = func_b(current_grade, arr_length);
    int max_diff_grade = func_c(current_grade, last_grade, arr_length);
    int answer = func_a(current_grade, last_grade, rank, arr_length, max_diff_grade);
    return answer;
}
int main() {
    int current_grade[6] = { 70, 100, 70, 80, 50, 95 };
    int current_grade_len = 6;
    int last_grade[6] = { 35, 65, 80, 50, 20, 60 };
    int last_grade_len = 6;
    int ret = solution(current_grade, current_grade_len, last_grade, last_grade_len);

    printf("solution 함수의 반환 값은 %d 입니다.\n", ret);
}