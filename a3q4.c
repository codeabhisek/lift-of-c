/* Write a program in C to find the factorial of a number using recursion.*/

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
    if(n==1 || n==0)
    return 1;
    else
    return n*fact(n-1);
}