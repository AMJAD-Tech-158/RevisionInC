#include<stdio.h>
int main() {
    int n;
    printf("Enter the number : \n");
    scanf("%d",&n);
    // for(int i=1; i<=10; i++) {
    //     printf("%d\n",i*n);
    // }
    int i=0;
    do {
        printf("%d",i*n)
    } while (i<=10) {
        i++;
    }
    


    return 0;
}