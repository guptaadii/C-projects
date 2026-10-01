/*
      * 
    * * * 
  * * * * * 
* * * * * * * 
  * * * * * 
    * * * 
      * 

*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter th no of rows: ");
    scanf("%d",&n);
    int nsp=n/2;
    int nst=1;
    int ml=n/2+1;
    if (n%2!=0){
        for (int i=1;i<=n;i++){
            for (int k=1;k<=nsp;k++){
                printf("  ");
            }
            for (int q=1;q<=nst;q++){
                printf("* ");
            }
            printf("\n");
            if(i<ml){
                nsp--;
                nst+=2;
            }
            else if(i>=ml){
                nsp++;
                nst-=2;
            }
        }
    }
    return 0;
}
