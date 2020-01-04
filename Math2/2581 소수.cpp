#include <iostream>
#include <math.h>
bool check_prime(int n);
int main() {
	int M = 0, N = 0, smallest = -1, sum = 0;
	std::cin >> M;
	std::cin >> N;
	for (int i = M; i <= N; i++) {
		if (check_prime(i)){// if 'i' is a prime number
			if (i == 1)
				continue;
			if (smallest == -1)// and if any prime numbers haven't come
				smallest = i;
			sum += i;
		}
	}
	if (smallest == -1)
		std::cout << smallest;
	else
		std::cout << sum << std::endl << smallest;
	return 0;
}
bool check_prime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}