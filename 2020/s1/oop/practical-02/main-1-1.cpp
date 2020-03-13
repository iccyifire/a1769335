#include <iostream>
using namespace std;
extern int diagonal(int array[4][4]);

int main(){
	int diagonal_v = 0;
	int fourbyfour[4][4] = {{0,1,2,1},{3,4,5,1},{6,7,8,1},{3,4,5,1}};
	diagonal_v = diagonal(fourbyfour);
	cout << "Diagonal : " << diagonal_v << endl << endl;
}