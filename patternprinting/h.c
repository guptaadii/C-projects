/*
ABCD
ABCD
ABCD
ABCD
*/

#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of rows: ");
    scanf("%d",&n);
    int a=65+n;
    for (int i=1;i<=n;i++){
        for (int j=65;j<a;j++){
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}