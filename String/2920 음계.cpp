#include <iostream>
int main() {
	int num[8],cnt=0;
	for (int i = 0; i < 8; i++)
		std::cin >> num[i];
	for (int j = 0; j < 7; j++) {
		if (num[j] < num[j + 1])
			cnt += 1;
		else
			cnt -= 1;
	}
	if (cnt == 7)
		std::cout << "ascending";
	else if (cnt == -7)
		std::cout << "descending";
	else
		std::cout << "mixed";
	return 0;
}