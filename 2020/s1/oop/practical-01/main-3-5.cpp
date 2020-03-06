#include <iostream>
extern double sumeven(double array[], int n);
using namespace std;

int main() {
	int array[9] = {1,2,3,4,5,6,7,8,9};
	int result= sumeven(array,9);
	cout << "The sum of array: " <<result<< endl;
}
