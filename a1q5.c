/* Write a C programs to check whether an alphabet is vowel or consonant using swith case. */

#include <stdio.h>

int main(){
    char ch;
    printf("\nEnter the alphabet:\n");
    scanf("%c", &ch);

    switch(ch){
        case 'a':printf("\nThe entered alphabet is a vowel.\n"); break;
        case 'e':printf("\nThe entered alphabet is a vowel.\n"); break;
        case 'i':printf("\nThe entered alphabet is a vowel.\n"); break;
        case 'o':printf("\nThe entered alphabet is a vowel.\n"); break;
        case 'u':printf("\nThe entered alphabet is a vowel.\n"); break;
        case 'A':printf("\nThe entered alphabet is a vowel.\n"); break;
        case 'E':printf("\nThe entered alphabet is a vowel.\n"); break;
        case 'I':printf("\nThe entered alphabet is a vowel.\n"); break;
        case 'O':printf("\nThe entered alphabet is a vowel.\n"); break;
        case 'U':printf("\nThe entered alphabet is a vowel.\n"); break;
        default:printf("\nThe entered alphabet is a consonant.\n");

    }
    return 0;
}