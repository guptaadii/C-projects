#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=0;
    int ld;
    while(n!=0){
        ld=n%10;
        n=n/10;
        if (ld%2==0){
            sum=sum+ld;
            n=n/10;
        }
        else{
            continue;
        }
    
    }
    printf("The sum of even digits is %d",sum);
    return 0;
}