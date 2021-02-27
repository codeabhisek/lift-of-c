/* Write a program to check whether a given number is paliandrome or not using recursion. */

#include <stdio.h>

int paliandrome(int, int);
int main(){
    int num, rev;
    printf("\nEnter the number:\n");
    scanf("%d", &num);
    rev = paliandrome(num, 0);
    if(rev == num)
    printf("\nThe entered number is a paliandrome.\n");
    else
    printf("\nThe entered number is not a paliandrome.\n");
    return 0;
}

int paliandrome(int a, int rev)
{
    if (a == 0)
    return rev;
    
    rev = rev*10 + a%10;
    return paliandrome(a/10, rev);
}