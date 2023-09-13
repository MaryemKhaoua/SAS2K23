#include <stdio.h>
#include <math.h>
int main()
{
    int x1, y1, x2, y2, res;
    printf("veuillez saisir les valeurs x1 y1 x2 y2 : ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    res = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    printf("la distance est : %d\n", res);
    return (0);
}