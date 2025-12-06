#include<stdio.h>
//Write a program to print the average of 3 numbers.
int main() {
    int num1,num2,num3;
    printf("Enter Number 1 : \n");
    scanf("%d",&num1);
    printf("Enter Number 2 : \n");
    scanf("%d",&num2);
    printf("Enter Number 3 : \n");
    scanf("%d",&num3);
    int average = (num1+num2+num3) /3;
    printf("Answer is the %d : \n",average);
    return 0;
}
