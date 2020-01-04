#include <iostream>
bool sieve[1000001];//initialized false automatically because of being declared as a global variable
int main() {
	int M = 0, N = 0;
	sieve[0] = sieve[1] = true;//in here, 'true' means it's a filtered one
	for (int i = 2; i < 1000000; i++) {
		if (sieve[i] == false) {//once used, filter its multiples
			for (int j = i + i; j <= 1000000; j += i)
				sieve[j] = true;//'true'  means sieve[j] has been filtered
		}
	}
	std::cin >> M >> N;
	for (int i = M; i <= N; i++) {
		if (sieve[i] == false)
			std::cout << i << '\n';
	}
	return 0;
}