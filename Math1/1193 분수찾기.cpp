#include <iostream>
int nextone(int criterion, int i);
int main() {
	int i = 0, N = 0, criterion = 1, next = 0;
	std::cin >> N;
	for (i = 1;; i++) {
		next = nextone(criterion, i);
		if (criterion <= N && N < next)
			break;
		criterion = next;
	}
	if (i % 2 == 1)
		std::cout << 1 << '/' << i;
	else if (criterion <= N && N <= criterion + i - 1)
		std::cout << 1 + (N - criterion) << '/' << i - (N - criterion);
	else
		std::cout << i + 1 - (N - (criterion + i)) << '/' << 1 + N - (criterion + i);
	return 0;
}
int nextone(int criterion, int i) {
	if (i % 2 == 1)
		return criterion + 1;
	else
		return criterion + 2 * i;
}