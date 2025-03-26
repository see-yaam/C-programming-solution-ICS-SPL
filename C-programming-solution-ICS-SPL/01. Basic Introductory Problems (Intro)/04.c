/*
   Program that will declare an integer, a floating point number, and a character. Then it will initialize them with values and print those values.
   +--------------+-----------------------------------------------+
   | Sample input | Sample output                                 |
   +--------------+-----------------------------------------------+
   |              | The integer value: 5                          |
   |              | The floating point value: 3.141593            |
   |              | The character value: a                        |
   +--------------+-----------------------------------------------+
   |              | The integer value: 100                        |
   |              | The floating point value: 1.618000            |
   |              | The character value: z                        |
   +--------------+-----------------------------------------------+

*/

#include<stdio.h>
int main()
{
    int integerVar;  // Declaring an integer variable
    float floatVar;  // Declaring a floating-point (decimal) variable
    char charVar;  // Declaring a character variable

    integerVar=5 ; // If you change the value, the output will also be change
    floatVar=3.141593;  // If you change the value, the output will also be change
    charVar='a';  // If you change the value, the output will also be change

    printf("The inetger value:%d\n",integerVar);   // %d is used for integers
    printf("The floating point value:%f\n",floatVar);   // %f is used for floating-point numbers
    printf("The Character value:%c\n",charVar);   // %c is used for characters
    return 0 ;
}
