#include <stdio.h>
int main(){
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    if (number>0){
        if (number%2==0){
            printf("The number is positively even\n");
        }
        else{
            printf("The number is positively odd\n");
        }
    }
    else{
        printf("The number is not positive\n");
    }
    return 0;
}