
#include <stdio.h>

int main() {
    float p = 500, r = 2, t = 5, si;  // Declaring variables for principle, rate of interest, time, and simple interest and assigning the values 500, 2 and 5 respectively

    si = (p * r * t) / 100;  // Calculating the simple interest using the formula (p * r * t) / 100

    printf("Simple Interest: %f", si);  // Printing the result

    return 0;
}

