#include<stdio.h>
// 1 to 20 tak number print karo
int main() {
    int num;
    printf("Enter your number : \n");
    scanf("%d",&num);
    for(int i=0; i<=num; i++) {
        printf("%d\n",i);
    }
}