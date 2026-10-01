//check whether user input number is prime or not

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number; ");
    scanf("%d",&n);
    for (int i=2;i<n;i++){
        if (n%i!=0){
            printf("prime");
            break;
        }
        else{
            printf("Not Prime");
        }
    }
    return 0;
}
