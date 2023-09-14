#include <stdio.h>
int main()
{
    int nbr;
    printf("entrer un nbr : \n");
    scanf("%d", &nbr);
    if (nbr % 2 == 0)
    printf("le nombre est paire");
    else
    printf("le nombre est impair");
}