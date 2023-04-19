#include <stdio.h>

int main()
{
    int day = 4;

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
    printf("Looking forward to the Weekend \n");
    }




    char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operation)
    {
    case '+':
    printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
    break;

    case '-':
    printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
    break;

    case '*':
    printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
    break;

    case '/':
    printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
    break;

    // operator doesn't match any case constant +, -, *, /
    default:
    printf("Error! operator is not correct");
    }
    /* local variable definition */




    char grade;
    printf("Enter an grade: ");
    scanf("%c", &grade);

    switch (grade)
    {
    case 'A':
    printf("Excellent!\n");
    break;
    case 'B':
    case 'C':
    printf("Well done\n");
    break;
    case 'D':
    printf("You passed\n");
    break;
    case 'F':
    printf("Better try again\n");
    break;
    default:
    printf("Invalid grade\n");
    }

    printf("Your grade is  %c\n", grade);

    return 0;
}