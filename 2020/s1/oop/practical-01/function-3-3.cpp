#include <iostream>

using namespace std;

double weightedaverage(int array[], int n) {
	double sum =0;
	int count;
	for (int i =0;i<n;i++){
		count=0;
		for (int j=0;j<n;j++){
			if (array[i]==array[j]){
				count++;
			}
		}
		sum+=((1.0*array[i]*count)/n);
	}
	return sum;
}