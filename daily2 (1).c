/******************************************************************************
Author: Adam Warden
Date: 1/21/2022
Effort: 15 minutes
Purpose: This code uses a for loop to iterate 32 times throughout the values of x, 
performing the left shift operand on each value of the variable.
*******************************************************************************/

#include <stdio.h>

int main(int argc, char* argv[]) {
    int x = 1;
    for (int i = 0; i < 32; i++) {
        printf("%d: %u \n", i, x);
        x = x << 1;
    }
    return 0;
}