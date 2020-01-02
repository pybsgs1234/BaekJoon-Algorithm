#include <iostream>
int main() {
	int N, floor, room, order;
	std::cin >> N;
	for (int i = 0; i < N;i++) {
		std::cin >> floor >> room >> order;
		if (order % floor == 0)
			std::cout << floor * 100 + order / floor << std::endl;
		else
			std::cout << 100 * (order % floor) + (order / floor) + 1 << std::endl;
	}
	return 0;
}