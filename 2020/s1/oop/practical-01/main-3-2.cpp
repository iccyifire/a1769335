#include <iostream>
extern int median(int array[], int n);
using namespace std;

int main() {
	int array[5] = {5,3,3,8,9};
	cout << median(array, 5) << endl;
}
