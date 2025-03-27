/*
 Program that will define a constant using "DEFINE" and print the value.

   +--------------+--------------------------+
   | Sample input | Sample output            |
   +--------------+--------------------------+
   |              | The value of HEIGHT: 200 |
   |              | The value of PI: 3.14    |
   +--------------+--------------------------+ 
   */
#include<stdio.h>
int main()
#define HEIGHT 200   //Defining a constant using "DEFINE"
#define PI 3.14      //Defining a constant using "DEFINE"
{
    printf("The value of HEIGHT: %d\n",HEIGHT);
    printf("The value of PI: %.2f\n", PI);
    return 0;
}
