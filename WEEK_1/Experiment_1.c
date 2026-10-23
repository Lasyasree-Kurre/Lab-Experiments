#include <stdio.h>

int main()
{
    int age;
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}
