#include <iostream>
using namespace std;
int sumtwo(int array[], int secondarray[], int n){
	if(n < 1)
	return 0;
	int result = 0;
	for(int i=0; i<n; i++){
		// ADDING one number from first array and other from second
		result = result + array[i];
		result = result + secondarray[i];
	}
	return result;
}
