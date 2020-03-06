#include <iostream>
extern int Maximum(int array[], int n);
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
	int largest = Maximum(array, n);
	cout<<"\nLargest Element is: "<<largest<<endl;
	return 0;
}
