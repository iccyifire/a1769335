#include <iostream>
// function to print 10x10 array of numbers
extern int sum_array(int[], int);
int main() {
	int sum;
	int array[5];
    std::cout<<"Input your number: ";
    for (int i = 0; i < 5; ++i){
    	std::cin>>array[i];
    	sum+=array[i];
    }
    std::cout << "The sum is: " << sum << std::endl;
    return 0;
 
}