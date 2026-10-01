#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=1;
    int fact=1;
    int j=1;
    while(i<=n){
        while(j<=i){
            fact=fact*j;
            j++;
        }
        i++;
        printf("The factorial of %d is %d\n",i,fact);


    }
    return 0;
     
}