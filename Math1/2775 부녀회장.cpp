#include <iostream>
int main() {
	int T, k, n, room[15][15] = { 0, };
	std::cin >> T;
	for (int i = 1; i <= 14; i++)
		room[0][i] = i;
	for (int i = 1; i <= 14;i++) {
		for (int j = 1; j <= 14 ; j++) {
			for (int m = 1; m <= j; m++)
				room[i][j] += room[i - 1][m];
		}
	}
	for (int i = 0; i < T; i++) {
		std::cin >> k;
		std::cin >> n;
		std::cout << room[k][n] << std::endl;
	}
	return 0;
}