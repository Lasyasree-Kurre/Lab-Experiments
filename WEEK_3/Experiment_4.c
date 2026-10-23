#include <stdio.h>

int main()
{
    float speed, time, distance;

    printf("Enter speed in km/h: ");
    scanf("%f", &speed);

    printf("Enter time in hours: ");
    scanf("%f", &time);

    distance = speed * time;

    printf("Distance travelled = %.2f km\n", distance);

    return 0;
}
