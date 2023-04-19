#include <stdio.h>

int main()
{
    int m = 5;
    int n = 3;
    printf("%d", m > n); // returns 1 (true) because 5 is greater than 3
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    char ch = 'B';
    printf("%c\n", ch); // printing character data

    // print decimal or integer data with d and i
    int x = 45, y = 90;
    printf("%d\n", x);
    printf("%i\n", y);
    float f = 12.67;
    printf("%f\n", f); // print float value
    printf("%e\n", f); // print in scientific notation

    int a = 67;
    printf("%o\n", a); // print in octal format

    printf("%x\n", a); // print in hex format

    char str[] = "Hello World";
    printf("%s\n", str);

    printf("%20s\n", str);    // shift to the right 20 characters including the string
    printf("%-20s\n", str);   // left align
    printf("%40.7s\n", str);  // shift to the right 20 characters including the string, and print string up to 5 character
    printf("%-40.7s\n", str); // left align and print string up to 5 character
    return 0;
}