#include <iostream>
int main() {
	long A, B, V,days=1,height;
	std::cin >> A >> B >> V;
	if ((V-B)%(A-B) == 0)
		std::cout << (V-B)/(A-B);
	else {
		days = 1 + (V - B) / (A - B);
		std::cout << days;
	}
	return 0;
}