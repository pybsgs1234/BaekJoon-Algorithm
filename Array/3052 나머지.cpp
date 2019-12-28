#include <iostream>
#define MAX 10
using namespace std;
bool inspection(int num,int* array);
int main() {
	int num[MAX], filtered[MAX], diff = 0;
	for (int i = 0; i < MAX; i++) {
		cin >> num[i];
		filtered[i] = -1;
	}
	for (int i = 0; i < MAX; i++) {
		num[i] = num[i] % 42;
		if (inspection(num[i], filtered)==true) {
			filtered[i] = num[i];
			diff++;
		}
	}
	cout << diff;
	return 0;
}
bool inspection(int num,int* array) {
	for (int i = 0; i < MAX; i++) {
		if (num == array[i])
			return false;
	}
	return true;
}