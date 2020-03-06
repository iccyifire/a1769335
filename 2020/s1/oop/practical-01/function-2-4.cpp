#include <iostream>
using namespace std;
// function to check if the array is in the ascending order or not
bool ascending(int array[], int n) {
// if size is less than 1 return false
	if(n < 1) {
		return false;
	}
// checking if the numbers are in ascending order or not
	for(int i = 1; i < n; i++) {
		if(array[i-1] > array[i]) {
			return false;
		}
	}
	return true;
}