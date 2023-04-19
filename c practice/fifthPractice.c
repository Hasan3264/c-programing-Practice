#include <stdio.h>

int main()
{
    int j = 1;

    while (j <= 5)
    {
        printf("%d\n", j);
        ++j;
    }
    int i = 0;

    do
    {
        printf("%d\n", i);
        i++;
    } while (i < 5);

    double number, sum = 0;

    // the body of the loop is executed at least once
    do
    {
        printf("Enter a number: ");
        scanf("%lf", &number);
        sum += number;
    } while (number != 0.0);

    printf("Sum = %.2lf \n", sum);



    int k, l;

    // Outer loop
    for (k = 1; k <= 2; ++k)
    {
        printf("Outer: %d\n", k); // Executes 2 times

        // Inner loop
        for (l = 1; l <= 3; ++l)
        {
            printf(" Inner: %d\n", l); // Executes 6 times (2 * 3)
        }
    }
    return 0;
}