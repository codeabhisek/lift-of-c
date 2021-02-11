/* Write a C program to find the largest and smallest element in an array. */

#include <stdio.h>

int main(){
    int size;
    int elmnt[size];
    int i, min, max;
    printf("Enter the size of the array:\n");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");

    for(i=0; i<size; i++)
    {
        scanf("%d", &elmnt[i]);
    }

    min=elmnt[0];
    max=elmnt[0];

    for(i=0; i<size; i++)
    {
        if(min>elmnt[i])
        min = elmnt[i];

        if(max<elmnt[i])
        max = elmnt[i];
    }

        printf("The smallest element in the array is %d.\n", min);
        printf("The largest element in the array is %d.\n", max);

    return 0;
}