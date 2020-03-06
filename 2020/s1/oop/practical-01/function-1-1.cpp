#include <iostream>
using namespace std;
int sum_array(int array[], int n)
{
	if(n < 1)
	return 0;
	int result = 0;
	for(int i=0; i<n; i++){
		// adding one number at a time
		result = result + array[i];
	}
	return result;
}
