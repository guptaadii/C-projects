#include <stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int ld;
    int rev_num=0;
    while(n!=0){
        ld=n%10;
        n=n/10;
        rev_num=rev_num*10+ld;
    }
    printf("The reversed number is %d",rev_num);
    return 0;
}