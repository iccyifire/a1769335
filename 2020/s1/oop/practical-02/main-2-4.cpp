#include <iostream>
using namespace std;
extern int max_integer(int integers[], int length);
extern int min_integer(int integers[], int length);
extern int sum_min_and_max(int integers[], int length);

int main(){
	int integers[6] = {1,2,1,1,2,1};
	cout << "Sum of max and min : " << sum_min_and_max(integers, 6);
   	cout << endl;
}