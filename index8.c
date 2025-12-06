#include<stdio.h>
int main() {
    int n;
    printf("Enter the Number : \n");
    scanf("%d",&n);
    if(n>0) {
        printf("It's a Natural Number\n");
    } else {
        printf("It's not a natural Numbers\n");
    }
    return 0;
}