//  A login system verifies password input by comparing strings. Implement a solution to compare two strings.
#include <stdio.h>
int main(){
    char str1[40];
    printf("Enter the first string: ");
    scanf(" %[^\n]s", str1);

    char str2[20];
    printf("Enter the second string: ");
    scanf(" %[^\n]s", str2);
    
    int size1=0,m=0;
    while(str1[m]!='\0'){
        size1++;
        m++;
    }

    int size2=0,n=0;
    while(str2[n]!='\0'){
        size2++;
        n++;
    }
    int flag=1;

    if (size1==size2){
        for(int i=0;i<size1;i++){
            if(str1[i]!=str2[i]){
                flag=0;
                break;
            }
        }
    }
    else flag=0;

    if (flag==1) printf("password accepted");
    else printf("password declined");
    return 0;
}