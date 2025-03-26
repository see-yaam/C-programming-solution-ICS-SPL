/* Program that will declare a variable from each data type: unsigned int, unsigned long int, unsigned long long int, unsigned short int.

   +--------------+--------------------------------------------------------+
   | Sample input | Sample output                                          |
   +--------------+--------------------------------------------------------+
   |              | The unsigned int value: 4294967295                     |
   |              | The unsigned long int value: 4294967295                |
   |              | The unsigned long long int value: 18446744073709551615 |
   |              | The unsigned short int value: 65535                    |
   +--------------+--------------------------------------------------------+
   |              | The unsigned int value: 0                              |
   |              | The unsigned long int value: 0                         |
   |              | The unsigned long long int value: 0                    |
   |              | The unsigned short int value: 0                        |
   +--------------+--------------------------------------------------------+
 */

#include <stdio.h>

int main() {
    unsigned int a = 4294967295;                     // An unsigned int variable
    unsigned long int b = 4294967295; // An unsigned long int variable
    unsigned long long int c = 18446744073709551615; // An unsigned long long int variable
    unsigned short int d = 65535;               // An unsigned short int variable

    // Printing the values
    printf("Unsigned Int Value: %u\n", a);
    printf("Unsigned Long Int Value: %lu\n", b);
    printf("Unsigned Long Long Int Value: %llu\n", c);
    printf("Unsigned Short Int Value: %u\n", d);

    return 0;
}
