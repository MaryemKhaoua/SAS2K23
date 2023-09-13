#include <stdio.h>

int main() {
    float F, C;

    printf("Entrez la temperature en Fahrenheit : ");
    scanf("%f", &F);
    
    C = (F - 32) / 1.8;
    printf("La temperature en Celsius est : %.2f\n", C);
    
    if (C < 0) {
        printf("Tres froid\n");
    } else if (C < 10) {
        printf("Froid\n");
    } else if (C < 30) { // Removed the semicolon here
        printf("Chaud\n");
    } else {
        printf("Tres chaud\n");
    }
    
    return 0;
}