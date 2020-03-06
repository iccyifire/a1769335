#include <iostream>
extern bool fanarray(int array[], int n);
using namespace std;

int main() {
	int array[5] = {1,2,3,2,1};
	cout << fanarray(array, 5) << endl;
}
