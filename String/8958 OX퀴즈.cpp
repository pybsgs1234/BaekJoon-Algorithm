#include <iostream>
#define MAX 80
int scoring(char* seq);
void init(char* seq);
int main() {
	int N = 0;
	char seq[MAX];
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		init(seq);
		std::cin >> seq;
		std::cout << scoring(seq) << std::endl;
	}
	return 0;
}
int scoring(char* seq) {
	int total = 0, stack = 0;
	for (int i = 0; i < MAX; i++) {
		if (seq[i] == 'O') {
			stack += 1;
			total += stack;
		}
		else if (seq[i] == 'X')
			stack = 0;
		else
			return total;
	}
}
void init(char* seq) {
	for (int i = 0; i < MAX; i++)
		seq[i] = 'A';
}
//1. �׽�Ʈ ���̽��� ������ �����Ƿ� ���̰� 80�� ���ڿ��� �Էµ� �׽�Ʈ ���̽� ����ŭ ��Ȱ��
//2. O,X�� ���ڿ��� ���̰� �������� �����Ƿ� �׽�Ʈ ���̽� �Է� ���� O,X �̿��� ���ڷ� �ʱ�ȭ