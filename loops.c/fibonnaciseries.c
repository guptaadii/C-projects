//1,1,2,3,5,8...nterms
//find the nth term

#include <stdio.h>
int main(){
    int n;
    printf("Enter the term: ");
    scanf("%d",&n);
    int i=1;
    int a=1,b=1;
    int sum=0;
    while (i<=n){
        sum=a+b;
        a=b;
        b=sum;
        i++;
    }
    printf("%d",b);
    return 0;

}