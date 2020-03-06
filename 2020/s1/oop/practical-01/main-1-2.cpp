#include <iostream>
extern int average(int[], int);

int main() {
	int a[5] = {2, 3, 4, 5, 2};
	int n = 5;
	std::cout << average(a, n) << std::endl;
	return 0;
}
