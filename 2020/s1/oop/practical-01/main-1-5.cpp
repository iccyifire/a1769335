#include <iostream>
extern int count_even(int number);

int main() {
	int number = 6;
	std::cout << count_even(number) << std::endl;
	return 0;
}
