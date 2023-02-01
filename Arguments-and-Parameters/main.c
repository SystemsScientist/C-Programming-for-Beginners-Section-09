/*
    Author: Matt Johnson
    Subject: functions
    Purpose: program calls a function multiple times
    Date: 02/01/2023
*/

#include <stdio.h>
#include <stdlib.h>

void multiply_two_numbers(int, int);        // function prototype

int main(void) {                            // function header

    multiply_two_numbers(10, 20);           // function call
    multiply_two_numbers(20, 30);           // function call
    multiply_two_numbers(50, 2);            // function call

    return 0;
}

void multiply_two_numbers(int x, int y) {   // function header

    int result = x * y;
    printf("The product of %d multiplied by %d is: %d\n", x, y, result);
}
