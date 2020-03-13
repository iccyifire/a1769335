#include <iostream>
using namespace std;

bool is_a_palindrome(int integers[], int length){
   	int i=0, j=0;
   	if(length < 1){
       	return false;
   	}
   	if(length == 1)
       	return true;
   	if(length%2 != 0){
       	j = (length/2) +1;
   	}
   	else{
       	j = (length/2);
   	}
   	for(i=(length/2)-1; i>=0; i--,j++){
       	if(integers[i] != integers[j]){
           	return false;
       	}
   	}
   	return true;
}
int sum_if_a_palindrome(int integers[], int length){
   	int sum = 0;
   	if(is_a_palindrome(integers, length)){
       	for(int i=0; i<length; i++){
           	sum += integers[i];
       	}
   	}
   	else{
       	return -2;
   	}
   	return sum;
}
int sum_elements(int integers[], int length){
   	int sum = 0;
   	for(int i=0; i<length; i++){
       	sum += integers[i];
   	}
   	return sum;
}