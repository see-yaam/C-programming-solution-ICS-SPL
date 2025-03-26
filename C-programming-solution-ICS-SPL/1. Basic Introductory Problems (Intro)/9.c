/*
Program that will declare a variable from each data type: double, boolean. Then it will initialize them with values and print them.

   +--------------+--------------------------------+
   | Sample input | Sample output                  |
   +--------------+--------------------------------+
   |              | The double value: 3.140000e+00 |
   |              | The boolean value: 1           |
   +--------------+--------------------------------+
   |              | The double value: 1.618039     |
   |              | The boolean value: 0           |
   +--------------+--------------------------------+
*/
// For first output
#include <stdio.h>
int main() {
    double d = 3.14; // Double type variable
    int boolean = 1; // Boolean representation (1 = true, 0 = false)

    printf("The double value: %e\n", d); // Here, we are using %e instead of %lf to print out the number in scientific notation (exponential format)
    printf("The boolean value: %d\n", boolean);
    return 0;
}

// for the second output ⬇️

#include <stdio.h>
int main() {
    double d = 1.618039 ; 
    int boolean = 0; 
    
    printf("The double value: %lf\n", d); // Here, we are using %lf for double and the output comes with no scientific notation (exponential format)
    printf("The boolean value: %d\n", boolean);
    return 0;
}