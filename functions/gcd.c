#include <stdio.h>
int hcf(int a,int b){
    int hcf;
    if (a<b){
        for(int i=1;i<=a;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
            } 
        }
    }
    else{
        for(int i=1;i<=b;i++){
            if(a%i==0 && b%i==0){
                hcf=i;
            } 
        }
    }
    return hcf;
}

int main(){
    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    int gcd=hcf(x,y);
    printf("The GCD/HCF of %d and %d is: %d",x,y,gcd);
    
    
}