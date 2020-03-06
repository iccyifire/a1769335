#include <iostream>
extern int Maximum(int array[], int n);
using namespace std;

int main() {
	int a[5] = {2, 3, 4, 5, 2};
	int n = 5;
	int largest = Maximum(a, n);
	cout<<"\nLargest Element is: "<<largest<<endl;
	return 0;
}
