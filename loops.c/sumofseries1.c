//1-2+3-4+5-6......n


#include <stdio.h>
int main(){
    int n;
    printf("Enter the last number: ");
    scanf("%d",&n);
    int sum=0;
    int i=0;
    while (i<=n){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
        i++;
    }
    printf("The sum of series is %d",sum);
    return 0;
}