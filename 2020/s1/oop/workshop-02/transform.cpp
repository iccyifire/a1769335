#include <iostream>
using namespace std;

long long transform(int);

int main(){
	int n, binary;
	cout<<"Type a number : ";
    cin>>n;
    binary = transform(n);
    cout << "The binary numbers is: " << binary << endl;
    return 0;
}

long long transform(int n) {
    long long binary = 0;
    int remainder, i =1, step =1;
    while (n!=0){
    	remainder = n%2;
    	n /=2;
    	binary += remainder*i;
    	i *=10;
    }
    return binary;
}