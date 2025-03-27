/*
   Program that will receive the values of an integer, a floating point number, and a character from the keyboard and print those values.
   +--------------+---------------------------------------------+
   | Sample input | Sample output                               |
   +--------------+---------------------------------------------+
   | 5 3.141593 A | The integer value: 5                        |
   |              | The floating point value: 3.141593          |
   |              | The character value: A                      |
   +--------------+---------------------------------------------+
   | 100 1.618 z  | The integer value: 100                      |
   |              | The floating point value: 1.618000          |
   |              | The character value: z                      |
   +--------------+---------------------------------------------+
*/



#include<stdio.h>
int main()
{
    int x;
    float y;
    char z;

    printf("Enter an Integer:");
    scanf("%d",&x);

    printf("Enter a floating point value :");
    scanf("%f",&y);

    printf("Enter a character value :");
    scanf(" %c",&z);   // Must add a space before %c. Previous scanf() leaves '\n' in buffer, space before %c ignores it

    printf("The integer value:%d\n",x);
    printf("The floating point value:%f\n",y);
    printf("The character value:%c\n",z);

    return 0;
}
