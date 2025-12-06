#include<stdio.h>
//Write a program to calculate perimeter of Rectangle.
//Take sides, a & b, from the user.
int main() {
    int length,width;
    printf("Enter the length : \n");
    scanf("%d",&length);
    printf("Enter the width : \n");
    scanf("%d",&width);
    int perimeterOfRectangle = (2*(length+width));
    printf("Answer is the : %d\n",perimeterOfRectangle);
    return 0;
}