#include <stdio.h>
int main()
{
    char nom[20], prenom[20], nbr[20];
    char sexe;
    int age;

    printf("Enter your name : \n");
    scanf("%s", nom);
    printf("Enter your last name : \n");
    scanf("%s", prenom);
    printf("Enter your age : \n");
    scanf("%d", &age);
    printf("Enter your gender : \n");
    scanf(" %c", &sexe);
    printf("Enter your phone number : \n");
    scanf("%s", nbr);

    printf("Hello your full name is %s %s and your age is %d and your gander is %c and ur phone number is %s \n", nom, prenom, age, sexe, nbr);

    return(0);
}