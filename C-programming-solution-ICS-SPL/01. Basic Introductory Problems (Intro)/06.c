/*
Program that will take your age in year(s) as input and print it.

   +--------------+-----------------+
   | Sample input | Sample output   |
   +--------------+-----------------+
   | 20           | My age is: 20   |
   +--------------+-----------------+
   | 21           | My age is: 21   |
   +--------------+-----------------+
*/

#include <stdio.h>
int main() {
    int age;   // Declaring an integer variable to store the age
    
    printf("Enter your age: ");
    scanf("%d", &age);    // Read input from user
    
    printf("My age is: %d\n", age);  // Print the entered age
    return 0;
}
