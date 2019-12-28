#include <iostream>
int main() {
	char word[100];
	int count[100], position=0;
	for (int i = 0; i < 100; i++)
		word[i] = 'X';
	for (int i = 0; i < 26; i++)
		count[i] = -1;
	std::cin >> word;
	for (int i = 0; i < 100; i++) {
		if (word[i] == 'X')
			break;
		position = (int)word[i] - 97;
		if (count[position] == -1)
			count[position] = i;
	}
	for (int i = 0; i < 26; i++)
		std::cout << count[i] << " ";
	return 0;
}