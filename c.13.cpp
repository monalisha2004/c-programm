// C program to find the simple interest
#include <stdio.h>

int main() {
  
    // Input values
    float P = 24, R = 4, T = 8;

    // Calculate simple interest
    float SI = (P * T * R) / 100;

    // Print Simple Interest
    printf("Simple Interest = %f\n", SI);

    return 0;
}
