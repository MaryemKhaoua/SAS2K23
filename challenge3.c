#include <stdio.h>
int main()
{
    int a, b;
    printf("saisir un nombre: \n");
    scanf("%d", &a);
    printf("saisir un nombre: \n");
    scanf("%d", &b);
    printf("la somme de 2 nbr est %d\n", a+b);
    printf("la sustraction de 2 nbr est %d\n", a-b);
    printf("la multiplication de 2 nbr est %d\n", a*b);
    if (b != 0)
    printf("la division de 2 nbr est %d\n", a/b);
    else
    printf("ERROR\n");
    printf("le modulo de 2 nbr est %d\n ", a%b);


    return (0);
}