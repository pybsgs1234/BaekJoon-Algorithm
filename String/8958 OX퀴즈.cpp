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
//1. 테스트 케이스의 제한이 없으므로 길이가 80인 문자열을 입력된 테스트 케이스 수만큼 재활용
//2. O,X의 문자열은 길이가 일정하지 않으므로 테스트 케이스 입력 전에 O,X 이외의 문자로 초기화