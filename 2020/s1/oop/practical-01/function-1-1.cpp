#include <iostream>
// function to ...
int sum_array(int array[])
{
int total = 0;
    for (int i = 0; i < 5; i++) {
        if (array[i] < 0) {
            array[i] = 0 ;
        }
    }

    return total;
}