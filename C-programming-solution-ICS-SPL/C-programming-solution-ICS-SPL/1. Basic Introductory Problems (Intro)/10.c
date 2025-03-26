/*
   Program that will declare and print different integer and floating point types.
   +--------------+----------------------------------------------+
   | Sample input | Sample output                                |
   +--------------+----------------------------------------------+
   |              | The long int value: 2147483647               |
   |              | The long long int value: 9223372036854775807 |
   |              | The long double value: 1.1E+4932             |
   |              | The short int value: 32767                   |
   +--------------+----------------------------------------------+
   |              | The long int value: -2,147,483,648           |
   |              | The long long int value: -9223372036854775808|
   |              | The long double value: 3.4E-4932             |
   |              | The short int value: -32768                  |
   +--------------+----------------------------------------------+
*/
// For first output

#include <stdio.h>
int main() {
    long int a = 2147483647;         // A long integer variable. Maximum value for long int "32-bit"
    long long int b = 9223372036854775807; // A long long integer variable. Max value for long long int "64-bit"
    long double c = 1.1E+4932 ;  // A long double variable
    short int d = 32767;   // A short int variable. Maximum value for short int "16-bit"

    // Printing the values
    printf("The Long Int Value: %ld\n", a);
    printf("The Long Long Int Value: %lld\n", b);
    printf("The Long Double Value: %Le\n", c);
    printf("The Short Int Value: %d\n", d);

    return 0;
}
