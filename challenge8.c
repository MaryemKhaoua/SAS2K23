#include <stdio.h>
int main()
{
    int nbr;
    printf("enter un nombre : ");
    scanf("%d", &nbr);
    printf("la valeur equivalente en octal %o\n : ", nbr);
    printf("la valeur equivalente en hexadecimal est : %X\n", nbr);

    return (0);
}