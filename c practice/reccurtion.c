#include <stdio.h>
#include <math.h>
int sum(int k);

int main()
{
    int result = sum(50);
    printf("%d", result);

    int y;
    scanf("%d", &y);
    printf("%.2f \n", sqrt(y)); //math
    printf("%d \n", abs(y)); 

    printf("%f", pow(4, 3));
    return 0;
}

int sum(int k)
{
    if (k > 0)
    {
        return k + sum(k - 1);
    }
    else
    {
        return 0;
    }
}