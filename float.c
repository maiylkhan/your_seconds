#include <stdio.h>

int main(){
    float a;
    printf("\nEnter a floating-point value: ");
    scanf("%f", &a);
    printf("\nFixed floating-point notation: %f", a);
    printf("\nExponential notation: %e", a);
    printf("\np notation: %a", a);
    return 0;
}