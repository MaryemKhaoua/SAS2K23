#include <stdio.h>
#include <math.h>
int main()
{
    float r, C;
    printf("Enter le rayon du cercle : ");
    scanf("%f", &r);
    C = 2 * M_PI * r;
    printf("la circonference du cercle est %f", C);
    return (0);
}