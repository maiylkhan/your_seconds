#include <stdio.h>

int main(){
    int age;
    
    printf("\nThere are approximately 3.156×10^7 seconds in a year.");
    printf("\nInput your age: ");
    scanf("%d", &age);
    long long int seconds = age*(3.156e7); 
    printf("\nWe are  displaying the equivalent number of seconds in your age....");
    printf("\nThe result : %lld seconds.", seconds);
    
    return 0;
    
}
