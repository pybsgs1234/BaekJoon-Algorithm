#include <iostream>
#include <math.h>
bool check_prime(int n);
int main() {
	int N = 0, number[100] = { 0, }, counter = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++)
		std::cin >> number[i];
	for (int i = 0; i < N; i++) {
		if (number[i] == 1)
			continue;
		else if (check_prime(number[i]))
			counter++;
	}
	std::cout << counter;
	return 0;
}
bool check_prime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}