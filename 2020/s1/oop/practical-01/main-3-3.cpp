#include <iostream>
extern double weightedaverage(int array[], int n);
using namespace std;

int main() {
	int array[6] = {1,2,1,4,1,3};
	cout << "The sum : " <<weightedaverage(array,6)<< endl;
}
