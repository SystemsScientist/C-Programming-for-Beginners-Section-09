/*
    Author: Matt Johnson
    Subject: functions
    Purpose: program computes an absolute value
    Date: 02/02/2023
*/

#include <stdio.h>
#include <stdlib.h>

float compute_absolute_value(float);

int main(void) {

    float result = 0;
    result = compute_absolute_value(-3.14);

    printf("absolute value is: %.3f", result);

    return 0;
}

float compute_absolute_value(float num) {

    if (num < 0)
        num = num * -1;

    return num;
}
