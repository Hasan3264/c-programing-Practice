#include <stdio.h>
#include <stdbool.h> // Import the boolean header file

int main()
{
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    printf("%d\n", isProgrammingFun); // Returns 1 (true)
    printf("%d \n", isFishTasty);        // Returns 0 (false)

    int number1, number2;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // checks if the two integers are equal.
    if (number1 == number2)
    {
        printf("Result: %d = %d", number1, number2);
    }

    // checks if number1 is greater than number2.
    else if (number1 > number2)
    {
        printf("Result: %d > %d", number1, number2);
    }

    // checks if both test expressions are false
    else
    {
        printf("Result: %d < %d", number1, number2);
    }

     int number3, number4;
    printf("Enter two integers: ");
    scanf("%d %d", &number3, &number4);

    if (number3 >= number2)
    {
        if (number3 == number2)
        {
            printf("Result: %d = %d", number3, number4);
        }
        else
        {
            printf("Result: %d > %d", number3, number4);
        }
    }
    else {
        printf("Result: %d < %d", number3, number4);
    }
        int time = 20;
        (time < 18) ? printf("Good day.") : printf("Good evening."); 
    return 0;
}