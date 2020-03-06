#include <iostream>

using namespace std;

double sumeven(double array[], int n) {
	if (n<1){
		return 0;
	}
	else{
		int sum=0;
		for (int i=0;i<n;i++){
			if(i%2==0){
			sum = sum + array[i];
			}
		}
	return sum;
	}
}