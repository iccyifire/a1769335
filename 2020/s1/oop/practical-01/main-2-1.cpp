#include <iostream>
extern int Minimum(int array[], int n);
using namespace std;

int main() {
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int array[n];
	cout<<"Enter array elements: ";
	for(int i=0; i<n; i++){
		cin>>array[i];
	}
	int smallest = Minimum(array, n);
	cout<<"\nSmallest Element is: "<<smallest<<endl;
	return 0;
}

