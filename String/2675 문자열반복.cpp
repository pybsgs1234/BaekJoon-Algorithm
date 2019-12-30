#include <iostream>
int main() {
	std::string str;
	int N=0,repeat = 0;
	std::cin >> N;
	for (int i = 0; i < N; i++) {
		std::cin >> repeat >> str;
		for (int j = 0; j < str.size(); j++) {
			for(int k=0;k<repeat;k++)
				std::cout << str[j];
		}
		std::cout << std::endl;
	}
	return 0;
}