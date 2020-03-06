#include <iostream>
using namespace std;
int Minimum(int array[], int n){
	int temp = array[0];
	for(int i=0; i<n; i++) {
		if(temp>array[i]) {
			temp=array[i];
		}
	}
	return temp;
}

