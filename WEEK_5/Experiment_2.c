#include <stdio.h>

int main()
{
    float units, bill;

    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units < 0)
    {
        printf("Invalid units consumed");
    }
    else if (units <= 100)
    {
        bill = units * 1.50;
        printf("Electricity bill = Rs. %.2f\n", bill);
    }
    else if (units <= 200)
    {
        bill = units * 2.50;
        printf("Electricity bill = Rs. %.2f\n", bill);
    }
    else if (units <= 500)
    {
        bill = units * 4.00;
        printf("Electricity bill = Rs. %.2f\n", bill);
    }
    else
    {
        bill = units * 6.00;
        printf("Electricity bill = Rs. %.2f\n", bill);
    }

    return 0;
}
