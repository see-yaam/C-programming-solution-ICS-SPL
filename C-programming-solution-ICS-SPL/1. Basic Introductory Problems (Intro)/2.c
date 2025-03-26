/*
 Program that will use newline/tab and print the following segment:
   +--------------+-------------------------------------------+
   | Sample input | Sample output                             |
   +--------------+-------------------------------------------+
   |              | Hello World.                              |
   |              | This is my first program.     C is fun.   |
   +--------------+-------------------------------------------+
*/

#include<stdio.h>
int main ()
{
    printf("Hello World.\nThis is my first program.\tC is fun.\n"); // \t represents tab & \n represents a new line.
    return 0 ;
}

