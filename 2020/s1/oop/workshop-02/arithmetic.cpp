#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long bin1,bin2;
	int i=0,r=0;
    int sum[20];
    int sub[20];
	cout<<"Type 1st binary numbers : ";
    cin>>bin1;
    cout<<"Type 2nd binary numbers : ";
    cin>>bin2;
    while (bin1 != 0 || bin2 !=0){
        sum[i++] =(int)((bin1%10+bin2%10+r)%2);
        r = (int)((bin1%10+bin2%10+r)/2);
        bin1=bin1/10;
        bin2=bin2/10;
    }
    if (r !=0){
        sum[i++]=r;
    }
    --i;

    while (bin1 != 0 || bin2 !=0){
        sub[i++] =(int)((bin1%10-bin2%10+r)%2);
        r = (int)((bin1%10-bin2%10+r)/2);
        bin1=bin1/10;
        bin2=bin2/10;
    }
    if (r !=0){
        sub[i++]=r;
    }
    --i;
    cout << "The sum of binary numbers is: " ;
    while(i>=0){
        cout<<(sum[i--]);
    }
    cout<<"\n";

    cout << "The subtract of binary numbers is: " ;
    while(i>=0){
        cout<<(sub[i--]);
    }
}