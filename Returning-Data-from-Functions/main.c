/*
    Author: MattJohnson
    Subject: functions
    Purpose: program passes and returns data
    Date: 02/02/2023
*/

#include <stdio.h>
#include <stdlib.h>

int multiply_two_numbers(int, int);             // function prototype

int main(void) {                                // function header

    int result = 0;
    result = multiply_two_numbers(10, 20);      // function call

    printf("result is %d\n", result);           // function call

    return 0;
}

int multiply_two_numbers(int x, int y) {        // function header

    int result = x * y;

    return result;
}
