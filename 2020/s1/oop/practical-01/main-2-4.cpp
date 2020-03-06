#include <iostream>
extern bool ascending(int array[], int n);
using namespace std;

int main() {
	int arr[] = {1,2,3,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout << ascending(arr, size) << endl;
	return 0;
}