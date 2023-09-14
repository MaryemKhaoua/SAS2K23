#include <stdio.h>
int main()
{
    int a, b, sum;

    printf("entrer la valeur a =  \n");
    scanf("%d", &a);
    printf("entre la valeur b = \n");
    scanf("%d", &b);
    sum = a + b;
    if ( a != b)
        printf("la somme est : %d", sum);
    else 
    printf("le triple de leur somme est %d", sum * 3);
    return (0);
}