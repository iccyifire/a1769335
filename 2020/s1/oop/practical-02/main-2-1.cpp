#include <iostream>
using namespace std;
extern void print_as_binary(std::string decimal_number);

int main(){
	string number;
	cout << "Enter positive number : " << endl;
	cin >> number;
	print_as_binary(number);
}