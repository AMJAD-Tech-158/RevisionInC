#include<stdio.h>
int main() {
    int n;
    printf("Enter the Number : \n");
    scanf("%d",&n);
    // for(int i=2; i<=n; i=i+2) {
    //     printf("%d\n",i);
    // }
    int i=0;
  while(i<=n){
    printf("%d",i);
    i++;
  }
    
    
    return 0;
}