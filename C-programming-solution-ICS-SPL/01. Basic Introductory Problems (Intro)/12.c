/*
 Program that will define a constant using "CONST" and print the value.
+--------------+---------------------------------+
| Sample input | Sample output                   |
+--------------+---------------------------------+
|              | The value of pi: 3.14           |
|              | The value of golden ratio: 1.62 |
+--------------+---------------------------------+ 
*/
#include <stdio.h>

int main() {
    const float PI = 3.14;              // Defining constant for Pi
    const float GOLDEN_RATIO = 1.62;    // Defining constant for the golden ratio

    // Printing constant values
    printf("The value of pi: %.2f\n", PI);
    printf("The value of golden ratio: %.2f\n", GOLDEN_RATIO);

    return 0;
}