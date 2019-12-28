#include <iostream>
int main() {
	int N = 0, max = 0;
	double total = 0, scores[1000] = { 0, };
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> scores[i];
		if (scores[i] > max)
			max = scores[i];
	}
	for (int i = 0; i < N; i++) {
		scores[i] = scores[i] * 100 / max;
		total += scores[i];
	}
	std::cout << total/N;
	return 0;
}