#include <iostream>
extern int count(int array[], int n, int number);

int main() {
	int a[5] = {2, 3, 4, 5, 2};
	int n = 5;
	std::cout << count(a, n, 2) << std::endl;
	return 0;
}
