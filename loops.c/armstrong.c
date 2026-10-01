//print all the armstrong numbers between 1 and 500


#include <stdio.h>
int main(){
    int sum,ld,n,i;
    for (i=1;i<=500;i++){
        n=i;
        sum=0;
        while(n>0){
            ld=n%10;
            sum=sum+ld*ld*ld;
            n=n/10;
        }
        if(sum==i){
            printf("%d is an Armstrong number\n",i);
        }
        else{
            continue;
        }
    }
    return 0;
}