#include <stdio.h>
#include <math.h>

int main()
{
    double num, result;

    printf("Enter a number: ");
    scanf("%lf", &num);

    if (num < 0)
    {
        printf("Square root of a negative number is not real.");
    }
    else
    {
        result = sqrt(num);
        printf("Square root = %.2f\n", result);
    }

    return 0;
}
