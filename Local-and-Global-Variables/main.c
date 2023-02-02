/*
    Author: Matt Johnson
    Subject: functions
    Purpose: program demonstrates scope
    Date: 02/02/2023
*/

#include <stdio.h>
#include <stdlib.h>

int my_global = 0;  // global variable

int main(void) {

    int my_local_main = 0; // local variable
    // can access my_global and my_local_main variables
    // but cannot access x variable

    return 0;
}

void my_function() {

    int x; // local variable
    // can access my_global and x variables
    // but cannot access my_local_main variable
}
