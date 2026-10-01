//print a raise to power b


#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the number to be raised to power: ");
    scanf("%d",&a);
    printf("Enter the power to be raised to: ");
    scanf("%d",&b);
    int i=1;
    int ans=1;
    while(i<=b){
        ans=a*a;
        i++;
    }
    printf("the answer is %d",ans);
    return 0;
}