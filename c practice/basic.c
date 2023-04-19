#include <stdio.h>

int main()
{
 printf("Hello, Mahmudul Hassan! \n");
 printf("\\I am learning C.");

 // Assign a value to the variable
 int myNum = 15;          // Integer (whole number)
 float myFloatNum = 5.99; // Floating point number
 char myLetter = 'D';     // Character
 printf("%d\n", myNum);
 printf("%f\n", myFloatNum);
 printf("%c\n", myLetter);


 printf("%f\n", myFloatNum);   // Default will show 6 digits after the decimal point
 printf("%.1f\n", myFloatNum); // Only show 1 digit
 printf("%.2f\n", myFloatNum); // Only show 2 digits
 printf("%.4f", myFloatNum);   // Only show 4 digits
 int sum1 = 100 + 50;          // 150 (100 + 50)
 int sum2 = sum1 + 250;        // 400 (150 + 250)
 int sum3 = sum2 + sum2;       // 800 (400 + 400)
 printf("%d\n", sum1);
 printf("%d\n", sum2);
 printf("%d\n", sum3);
 return 0;
}
