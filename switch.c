#include <stdio.h>
int main()
{
    char voyelle;
    printf("enter un caractere : \n");
    scanf("%c", &voyelle);
    switch (voyelle)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
    printf("le caractere est voyelle");
    break;
    default:
    printf("le caractere n'est pas un voyelle");
        break;
    }
    return (0);
}