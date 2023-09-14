#include <stdio.h>
int main()
{
    int an;

    printf("enter a year to covert it in months, days , HHMMSS : \n");
    scanf("%d", &an);
    printf("the year in months is %d\n", an * 12);
    printf("the year in days is %d\n", an * 12 * 30);
    printf("the year in hours is %d\n", an * 12 * 30 * 24);
    printf("the year in minutes is %d\n", an * 12 * 30 * 24 * 60);
    printf("the year in seconds is %d\n", an * 12 * 30 * 24 * 60 * 60);

    return (0);
}