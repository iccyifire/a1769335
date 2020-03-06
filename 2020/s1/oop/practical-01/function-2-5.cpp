#include <iostream>
using namespace std;
// function to check if the array is in the descending order or not
bool descending(int array[], int n) {
// if size is less than 1 return false
	if(n < 1) {
		return false;
	}
// checking if the numbers are in descending order or not
	for(int i = 1; i < n; i++) {
		if(array[i-1] < array[i]) {
			return false;
		}
	}
	return true;
}
