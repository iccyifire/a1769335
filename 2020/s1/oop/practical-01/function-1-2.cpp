#include <iostream>
using namespace std;
double average(int array[], int n){
	if(n < 1)
	return 0;
	int result = 0;
	for(int i=0; i<n; i++){
		// calculating sum
		result = result + array[i];
	}
	// returning average
	return result*1.0/n;
}

