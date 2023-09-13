#include <stdio.h>
int main()
{
    int a, b, c, d, sum, moy;

    printf("entre le 1er nbr : \n");
    scanf("%d", &a);
    printf("entre le 2eme nbr : \n");
    scanf("%d", &b);
    printf("entre le 3eme nbr : \n");
    scanf("%d", &c);
    printf("entre le 4eme nbr : \n");
    scanf("%d", &d);
    sum = a + b + c + d;
    moy = sum / 4;
    printf("la somme est : %d\n", sum);
    printf("la moyenne est : %d\n", moy);

}
