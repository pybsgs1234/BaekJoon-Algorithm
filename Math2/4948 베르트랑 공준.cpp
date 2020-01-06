#include <iostream>
#include <math.h>
bool check_prime(int n);
int main() {
	int N = 0, count = 0;;
	for (;;) {
		std::cin >> N;
		if (N == 0)
			return 0;
		for (int i = N + 1; i <= 2 * N; i++) {
			if (check_prime(i))
				count++;
		}
		std::cout << count << std::endl;
		count = 0;
	}
}
bool check_prime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}