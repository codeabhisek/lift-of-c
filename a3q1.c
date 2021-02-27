/* Write a program in C to find the square of any number using the function.*/

#include <stdio.h>

int square(int);
int main(){
    int num;
    printf("\nEnter the number:\n");
    scanf("%d", &num);
    printf("\nThe square of %d is %d.\n", num, square(num));
    return 0;
}

int square(int n)
{
    return n*n;
}