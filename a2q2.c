/* Write a C program to print the sum of all the even elements and even position elements in an array. */

#include <stdio.h>

int main(){
    int elmnt[10];
    int i, sum1=0, sum2=0;

    printf("\nEnter the elements in the array:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &elmnt[i]);
    }

    for(i=0; i<10; i++)
    {
        if(elmnt[i]%2==0)
        {
            sum1 = sum1 + elmnt[i];
            printf("\nEven element:%d\n", elmnt[i]);
        }
    }


    for(i=0; i<10; i+=2)
    {
        sum2 = sum2 + elmnt[i];
        printf("\nEven position element:%d\n", elmnt[i]);
    }

    printf("\nThe sum of the even elements of the array %d.\n", sum1);
    printf("\nThe sum of the even position elements of the array %d.\n", sum2);

    return 0;
}