/* Write a C program to enter the radius of a circle and find its diameter, circumference and area. */

#include <stdio.h>

int main(){
    float r, d, area, circumference, pi=3.142;
    printf("\nEnter the radius of the circle:\n");
    scanf("%f", &r);
    
    d = 2*r;
    area = pi*r*r;
    circumference = 2*pi*r;

    printf("\nThe value of the diameter of the circle is %f\n", d);
    printf("\nThe area of the circle is %f\n", area);
    printf("\nThe value of the circumference is %f\n", circumference);
    return 0;
}