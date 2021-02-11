/* Write a C program to claculate the sum of digits of a number. */

#include <stdio.h>

int main(){
    int num, product = 1, Remainder;
    printf("\nEnter a number:\n");
    scanf("%d", &num);

    while(num>0)
    {
        Remainder = num % 10;
        product = product * Remainder;
        num = num / 10;
    }

    printf("\nThe product of digits of the number is %d.\n", product);
    return 0;
}