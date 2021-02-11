/*Write a program to print given patterns using loops :
                *         *
                  *     *
                     *    
                  *     *
                *          *
*/

#include <stdio.h>

int main(){
    int n, i, j, count;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    count = 2*n - 1;

    for(i=1; i<=count; i++)
    {
        for(j=1; j<=count; j++)
        {
            if(i==j|| j==count-i+1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

