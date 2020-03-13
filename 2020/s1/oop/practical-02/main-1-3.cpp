#include <iostream>
using namespace std;
extern void count_numbers(int array[4][4]);

int main(){
	int fourbyfour[4][4] = {{0,1,2,1},{3,4,5,1},{6,7,8,1},{3,4,5,1}};
	count_numbers(fourbyfour);
	cout << endl;
}