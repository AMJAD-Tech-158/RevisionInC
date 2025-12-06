#include<stdio.h>
// Write a program to print the smallest number of two.
int main() {
    int a,b;
    printf("Enter first number : \n");
    scanf("%d",&a);
    printf("Enter Second number \n");
    scanf("%d",&b);

    if (a<b) {
        printf("Smallest number : %d\n",a);
    } else {
        printf("Smallest number : %d\n",b);
    }
    return 0;
}