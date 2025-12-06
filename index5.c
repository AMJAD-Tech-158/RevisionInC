#include<stdio.h>
//Write a program to check if give character is digit or not.
int main () {
    char ch;
    printf("Enter your character or digit \n");
    scanf("%c",&ch);
    if(ch >= '0' && ch <= '9') {
        printf("Digit\n");
    } else {
        printf("Character\n");
    }
    return 0;
}