#include <stdio.h>

int main()
{
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d", myNumbers[0]);

    myNumbers[0] = 33;

    printf("%d", myNumbers[0]);

    int i;
    for (i = 0; i < 4; i++)
    {
        printf("%d\n", myNumbers[i]);
    }
  


    // multi dimensional arrays
    int matrix[2][3] = {{1, 4, 2}, {3, 6, 8}};

    printf("%d", matrix[0][2]);

    // To change the value of an element, refer to the index number of the element in each of the dimensions :
    matrix[0][0] = 9;

    printf("%d", matrix[0][0]);


    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
    }
  

  // srting

    char greetings[] = "Hello World!";
    printf("%s", greetings);

    
    printf("%c", greetings[0]);

    greetings[0] = 'J';
    printf("%s", greetings);


    for (i = 0; i < 5; ++i)
    {
        printf("%c\n", greetings[i]);
    }
    return 0;
}