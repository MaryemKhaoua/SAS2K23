#include <stdio.h>
int main()
{
   int nbr, H, D, U;
    printf("Enter le nombre: ");
    scanf("%d", &nbr);
    H = nbr / 100;
    D = (nbr % 100) / 10;
    U = nbr % 10;
    printf("l'iverse de nbr est : %d%d%d", U, D, H);
    return (0);
}