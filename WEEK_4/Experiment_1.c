#include <stdio.h>

int main()
{
    int A, B, C, D, E, F, G;
    int i, J;

    printf("Enter A, B, C, D, E, F, G: ");
    scanf("%d %d %d %d %d %d %d",
          &A, &B, &C, &D, &E, &F, &G);

    printf("a. A+B*C+(D*E)+F*G = %d\n",
           A + B*C + D*E + F*G);

    if (B != 0)
        printf("b. A/B*C-B+A*D/3 = %d\n",
               A/B*C - B + A*D/3);
    else
        printf("b. Cannot evaluate because B is zero.\n");

    printf("c. A+++B---A = %d\n", A++ + B-- - A);

    printf("Enter i: ");
    scanf("%d", &i);

    J = i;
    i++;
    J += i;
    i++;

    printf("d. Safe alternative result J = %d\n", J);

    return 0;
}
