#include <iostream>
using namespace std;
int count_even(int number)
{
	if(number < 1)
	return 0;
	int result = 0;
	for(int i=0; i<number; i++){
		if((number%2) == 0)
		result++;
		number = result;
	}
	return result;
}
