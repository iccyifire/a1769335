#include <iostream>
extern int sumtwo(int array[], int secondarray[], int n);

int main() {
	int a[5] = {2, 3, 4, 5, 2};
	int n = 5;
	std::cout << sumtwo(a, a, n) << std::endl;
	return 0;
}
