#include <stdio.h>

int solution(int score[], int score_len) {
	int cnt = 0; //������ ���� ���ϴ� ����
	for (int i = 0; i < score_len; i++) {
		//for���� score�迭�� ���̸�ŭ ���� ���� ��
		//������ 650�� �̻� 800�̸��� ������ ���� ã�ƾ��ϹǷ�
		//�� ���� ��� �����ؾߵǼ� &&�� ���
		//�� ���� ��� ������ �� ������ �� 1�� ����
		if (650 <= score[i] && score[i] < 800) cnt++;
	}
	return cnt; //������ �� ����
}
int main() {
	int score[] = { 650, 722, 914, 558, 714, 803, 650, 679, 669, 800 };
	int result;
	result = solution(score, 10); //result ������ ������ �� ��ȯ
	printf("�������: %d\n", result); 
	return 0;
}