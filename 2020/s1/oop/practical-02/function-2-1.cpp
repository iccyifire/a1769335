#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

void print_as_binary(std::string decimal_number){
   int num = atoi(decimal_number);
   if(num < 1){
       cout << "number should not less than 1 " << endl;
       exit(0);
   }
   for(int i=31; i>=0 ; i--)
   {
       cout << ((num >> i) & 1) ;
   }
   cout << endl;
}