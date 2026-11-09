#include<stdio.h>
#include<math.h>
int fact(int x){
    int xfact=1;
    for(int i=2;i<=x;i++){
        xfact=xfact*i;
    }
    return xfact;
}
int main(){
    int x,y;
    printf("Enter the value of n:");
    scanf("%d",&x);
    printf("Enter the value of r:");
    scanf("%d",&y);
    int ncr=fact(x)/(fact(y)*fact(x-y));
    int npr=fact(x)/fact(x-y);
    printf("Permutation= %d\n",npr);
    printf("Combination= %d",ncr);
    return 0;
}