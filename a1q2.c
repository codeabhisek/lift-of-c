/* Write a C program to enter temperature in celsius and convert it into Farenhiet*/

#include <stdio.h>

int main(){
    float celsius, farenheit;
    printf("\nEnter the temperature in Celsius:\n");
    scanf("%f", &celsius);

    farenheit = (celsius * 9 / 5) + 32;
    
    printf("\nThe temperature in Farenheit: %f\n", farenheit);
    return 0;
}