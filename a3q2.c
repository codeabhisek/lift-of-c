/* Write a program in C to print the factorial of a given number using function.*/

#include <stdio.h>

int fact(int);
int main(){
    int num;
    printf("\nEnter the number:\n");
    scanf("%d", &num);
    printf("\nThe factorial of %d is %d.\n", num, fact(num));
    return 0;
}

int fact(int n)
{
    int fact = 1;
    for(int i=1; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}