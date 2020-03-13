#include <iostream>
using namespace std;
extern int identity(int array[10][10]);

int main(){
	int tenbyten[10][10] = {{1,0,0,0,0,0,0,0,0,0},
							{0,1,0,0,0,0,0,0,0,0},
							{0,0,1,0,0,0,0,0,0,0},
							{0,0,0,1,0,0,0,0,0,0},
							{0,0,0,0,1,0,0,0,0,0},
							{0,0,0,0,0,1,0,0,0,0},
							{0,0,0,0,0,0,1,0,0,0},
							{0,0,0,0,0,0,0,1,0,0},
							{0,0,0,0,0,0,0,0,1,0},
							{0,0,0,0,0,0,0,0,0,1},
							};
	if(identity(tenbyten) == 1){
		cout << "Matrix is Identity" << endl<< endl;
	}
	else{
		cout << "Matrix is Not Identity" << endl<< endl;
	}
}