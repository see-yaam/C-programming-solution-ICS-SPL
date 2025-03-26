/* 
Program that will define a global and a local variable with the same name but with different values, and then do the following steps in order:
   A. Print the value of the variable before defining the local variable.
   B. Print the value of the variable after defining the local variable.
   C. Explicitly print the value of the variable as global.

   +--------------+--------------------+
   | Sample input | Sample output      |
   +--------------+--------------------+
   |              | A. Global: 10      |
   |              | B. Local: 20       |
   |              | C. Global: 10      |
   +--------------+--------------------+
 */
#include <stdio.h>
int var= 10; //Define a global variable
int main() 
{
    printf("A. Global: %d\n", var);
    int var= 20; //Define a local variable with the same name
    printf("B. Local: %d\n", var);
    {
        extern int var; //'extern' tells the compiler that the variable 'var' is defined outside this block (globally)
        printf("C. Global: %d\n", var); 
    }
    return 0;
}