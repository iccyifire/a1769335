#include <iostream>
extern int Minimum(int array[], int n);
using namespace std;

int main() {
	int a[5] = {2, 3, 4, 5, 2};
	int n = 5;
	int smallest = Minimum(a, n);
	cout<<"\nSmallest Element is: "<<smallest<<endl;
	return 0;
}

