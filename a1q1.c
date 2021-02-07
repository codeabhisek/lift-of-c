/* Write a C program to enter two numbers and perform all arithematic operaters. */

#include <stdio.h>

int main(){
    int a, b, add, sub, mult;
    float div;
    printf("\nEnter the first number:\n");
    scanf("%d", &a);
    printf("\nEnter the second number:\n");
    scanf("%d", &b);
    
    add = a + b;
    sub = a - b;
    mult = a * b;
    div = a / b;

    printf("\nThe result of addition of the two numbers is %d\n", add);
    printf("\nThe result of subtraction of the two numbers is %d\n", sub);
    printf("\nThe result of multiplication of the two numbers is %d\n", mult);
    printf("\nThe result of division of the two numbers is %f\n", div);


    return 0;
}