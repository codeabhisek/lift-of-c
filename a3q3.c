/* Write a program in C to find the GCD and LCM of two numbers using recursion.*/

#include <stdio.h>

int GCD(int, int);
int LCM(int, int);
int main(){
    int a, b;
    printf("\nEnter the two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("\nThe LCM of %d and %d is %d.\n", a, b, LCM(a, b));
    printf("\nThe GCD of %d and %d is %d.\n", a, b, GCD(a, b));
    return 0;
}

int GCD(int x, int y)
{
    if(y==0)
    return x;
    else
    return GCD(y, x%y);
}

int LCM(int x, int y)
{
    return (x/GCD(x, y))*y;
}