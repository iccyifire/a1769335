#include <iostream>
extern bool descending(int array[], int n);
using namespace std;

int main() {
	int arr[] = {1,2,3,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << descending(arr, size) << endl;
	return 0;
}