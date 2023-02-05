/*
    Author: Matt Johnson
    Subject: functions
    Purpose: challenge and demonstration
    Date: 02/02/2023

    Instructions:

        1. write three functions
        2. write a function that finds the greatest common
           divisor of two non-negative values and return
           the result
            - gcd, takes two ints as parameters
        3. write a function to calculate the absolute value
           of a number
            - should take as a parameter a float and return
              a float
            - test this function with ints and floats
        4. write a function to compute the square root of a
           number
            - if a negative argument is passed then a message
              is displayed and -1.0 should be returned
            - should use the absolute_value() function as
              implemented in the above step
*/

#include <stdio.h>
#include <stdlib.h>

// function prototypes
int gcd(int u, int v);
float absolute_value(float x);
float square_root(float x);

int main(void) {

    // gcd variables, function calls, and displays
    int result = 0;

    result = gcd(150, 35);
    printf("\nThe gcd of 150 and 35 is %d", result);

    result = gcd(1026, 405);
    printf("\nThe gcd of 1026 and 405 is %d", result);

    result = gcd(83, 240);
    printf("\nThe gcd of 83 and 240 is %d", result);

    // absolute value variables, function calls, and displays
    float f1 = -15.5, f2 = 20.0, f3 = -5.0;
    int i1 = -716;
    float absolute_value_result = 0.0;

    absolute_value_result = absolute_value(f1);
    printf("\n\nabsolute result of %.2f = %.2f\n", f1, absolute_value_result);

    absolute_value_result = absolute_value(f2) + absolute_value(f3);
    printf("absolute result of %.2f + %.2f = %.2f\n", f2, f3, absolute_value_result);

    absolute_value_result = absolute_value((float) i1);
    printf("absolute result of %.2f = %.2f\n\n", (float) i1, absolute_value_result);

    // square root variables, function calls, and displays
    float sqrt1 = -3.0, sqrt2 = 16.0, sqrt3 = 25.0, sqrt4 = 9.0, sqrt5 = 121.0;
    float square_root_result = 0.0;

    square_root_result = square_root(sqrt1);
    printf("square root result of %.2f = %.2f\n", sqrt1, square_root_result);

    square_root_result = square_root(sqrt2);
    printf("square root result of %.2f = %.2f\n", sqrt2, square_root_result);

    square_root_result = square_root(sqrt3);
    printf("square root result of %.2f = %.2f\n", sqrt3, square_root_result);

    square_root_result = square_root(sqrt4);
    printf("square root result of %.2f = %.2f\n", sqrt4, square_root_result);

    square_root_result = square_root(sqrt5);
    printf("square root result of %.2f = %.2f\n", sqrt5, square_root_result);

    return 0;
}

int gcd(int u, int v) {

    int temp;

    while (v != 0) {

        temp = u % v;
        // printf("%d\n", temp); // use for testing
        u = v;
        // printf("%d\n", u);    // use for testing
        v = temp;
        // printf("%d\n\n", v);  // use for testing
    }

    return u;
}

float square_root(float x) {

    const float epsilon = 0.00001;
    float guess = 1.0;
    float return_value = 0.0;

    if (x < 0) {

        printf("Negative argument to square root.\n");
        return_value = -1.0;
    } else {

        printf("\n");
        while (absolute_value(guess * guess - x) >= epsilon) {
            guess = (x / guess + guess) / 2.0;
            printf("guess is %.2f\n", guess);
        }

        printf("return value is %.2f \n", guess);
        return_value = guess;
    }

    return return_value;
}

float absolute_value(float x) {

    if (x < 0)
        x = -x;

    return x;
}
