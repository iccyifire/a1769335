#include <iostream>
extern int sum_array(int[], int);

int main() {
	int a[5] = {2, 3, 4, 5, 2};
	int n = 5;
	std::cout << sum_array(a, n) << std::endl;
	return 0;
}
