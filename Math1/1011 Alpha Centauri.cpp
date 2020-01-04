#include <iostream>
#include <math.h>
int main() {
	int T = 0, x = 0, y = 0, distance = 0, top_root = 0, bottom_root=0;
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		std::cin >> x >> y;
		distance = y - x;
		top_root = ceil(sqrt(distance));
		bottom_root = (top_root - 1);
		if (distance > floor(bottom_root*bottom_root+((top_root * top_root - bottom_root * bottom_root) / 2)))
			std::cout << 2 * bottom_root + 1 << std::endl;
		else
			std::cout << 2 * bottom_root << std::endl;
	}
	return 0;
}