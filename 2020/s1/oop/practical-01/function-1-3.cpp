#include <iostream>
using namespace std;
int count(int array[], int n, int number){
	if(n < 1)
	return 0;
	int result = 0;
	for(int i=0; i<n; i++){
		// whenever number is in array, incrementing by 1
		if(array[i] == number)
		result++;
	}
	return result;
}