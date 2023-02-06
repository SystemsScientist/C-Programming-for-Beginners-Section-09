/*
    Author: Matt Johnson
    Subject: functions
    Purpose: compute a greatest common divisor (gcd)
    Date: 02/05/2023
*/

#include <stdio.h>
#include <stdlib.h>

int gcd(int, int);

int main(void) {

    int result = 0;

    result = gcd(150, 35);
    printf("\nThe gcd of 150 and 35 is %d\n", result);

    return 0;
}

int gcd(int u, int v) {

    int temp;

    while (v != 0) {

        temp = u % v;
        printf("%d\n", temp);   // use for testing

        u = v;
        printf("%d\n", u);      // use for testing

        v = temp;
        printf("%d\n\n", v);    // use for testing
    }

    return u;
}
