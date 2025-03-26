/*
   Program that will take three integer numbers from the keyboard but assign only the first and last inputs to variables and skip any assignment of the middle one.

   +--------------+------------------------------------+
   | Sample input | Sample output                      |
   +--------------+------------------------------------+
   | 20 50 100    | First Value = 20, Last Value = 100 |
   +--------------+------------------------------------+
   | 33 75 22     | First Value = 33, Last Value = 22  |
   +--------------+------------------------------------+

*/

#include<stdio.h>
int main()
{

    int firstV,middleV,lastV;
    
    printf("Enter three integer value:");
    scanf("%d %*d %d",&firstV,&middleV,&lastV);

    printf("First Value = %d ,Last Value = %d\n",firstV,lastV);
    return 0;

}
