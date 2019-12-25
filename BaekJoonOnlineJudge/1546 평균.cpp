#include <iostream>
int main() {
	double N, score_max = 0,average = 0, total = 0,
		converted[1000] = { 0, }, subjects[1000] = { 0, };
	std::cin >> N;// number of test ONE has took
	for (int i = 0; i < N; i++) {
		std::cin >> subjects[i];
	}
	score_max = subjects[0];
	for (int i=0; i < N - 1; i++) {
		if (subjects[i] < subjects[i + 1])
			score_max = subjects[i + 1];
	}
	for (int i = 0; i < N; i++) {
		converted[i] = (subjects[i] / score_max) * 100;
		total += converted[i];
	}
	average = total / N;
	std::cout<<average;

	return 0;
}