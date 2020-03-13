#include <iostream>
using namespace std;

int max_integer(int integers[], int length){
   	int max=0;
   	for(int i=0; i<length; i++){
       	if(max < integers[i]){
           	max = integers[i];
       	}
   	}
   	cout << max << " + ";
   	return max;
}

int min_integer(int integers[], int length){
   	int min =integers[0];
   	for(int i=0; i<length; i++){
       	if(min > integers[i]){
           	min = integers[i];
       	}
   	}
   	cout << min << " = ";
   	return min;
}

int sum_min_and_max(int integers[], int length){
   	return (max_integer(integers, length) + min_integer(integers, length));
}