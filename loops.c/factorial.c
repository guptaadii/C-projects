#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int fact=1;
    int i=1;
    while(i<=n){
        fact=fact*i;
        i++;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}