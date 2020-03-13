#include <iostream>
using namespace std;
extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
	int array[30] = {0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1};
	binary_to_number(array,30);
	cout << endl << endl;
}