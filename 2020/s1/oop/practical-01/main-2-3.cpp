#include <iostream>
extern void twofivenine(int array[], int n);
using namespace std;

int main() {
	int n;
	cout<<"Enter the size of array: ";
	cin>>n;
	int array[n];
	cout<<"\n Enter array elements: ";
	for(int i=0; i<n; i++){
		cin>>array[i];
	}
	twofivenine(array, n);
	return 0;
}
