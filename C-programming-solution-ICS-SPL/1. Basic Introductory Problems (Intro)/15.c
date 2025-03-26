/*
 Program that will take a floating point number as input from the keyboard and use printf function to perform the followings:
(a) Print the number right justified within 10 columns
(b) Print the number to be right justified to 2 columns (Assuming the input has more than 2 digits)
(c) Print the number rounded to two decimal places
(d) Print the number rounded to integer (without using conversion or type casting)
(e) Prints the number in exponential notation/scientific notation
+--------------+----------------------------+
| Sample input | Sample output              |
+--------------+----------------------------+
| 123.098      | (a) Val:      123.098000   |
|              | (b) Val:123.098000         |
|              | (c) Val:123.10             |
|              | (d) Val:123                |
|              | (e) Val: 1.230980e+02      |
+--------------+----------------------------+
| 456.78       | (a) Val:      456.780000   |
|              | (b) Val:456.780000         |
|              | (c) Val:456.78             |
|              | (d) Val:457                |
|              | (e) Val: 4.567800e+02      |
+--------------+----------------------------+ 
*/

#include <stdio.h>
int main() {
    float floatValue;

    // Prompt the user for input
    printf("Please enter a floating-point number: ");

    // Read the floating-point number from the user
    scanf("%f", &floatValue);

    printf("(a) Right-justified within 10 columns: %10f\n", floatValue);
    printf("(b) Right-justified to 2 columns: %2f\n", floatValue);
    printf("(c) Rounded to two decimal places: %.2f\n", floatValue);
    printf("(d) Rounded to integer: %.0f\n", floatValue);
    printf("(e) Exponential notation: %e\n", floatValue);

    return 0;
} 

