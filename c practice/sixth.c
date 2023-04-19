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


    int t , e;
    for (t = 0; t < 2; t++)
    {
        for (e = 0; e < 3; e++)
        {
            printf("%d\n", matrix[t][e]);
        }
    }
  

  // srting

    char greetings[] = "Hello World!";
    printf("%s", greetings);


    printf("%c", greetings[0]);

    greetings[0] = 'J';
    printf("%s", greetings);

    int w;
    for (w = 0; w < 5; ++w)
    {
        printf("%c\n", greetings[w]);
    }




    // inpput


   
        // Create a string
        char fullName[30];

        // Ask the user to input some text (full name)
        printf("Type your full name and press enter: \n");

        // Get the text
        fgets(fullName, sizeof(fullName), stdin);

        // Output the text
        printf("Hello %s", fullName);

        return 0;
    
    return 0;
}