// A password masking system reverses input for verification without using built-in functions. Implement a solution to display a string in reverse order. 

#include <stdio.h>

int main(){
    char str[40];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    int size=0,i=0;
    while(str[i]!='\0'){
        size++;
        i++;
    }

    for (int k=0,j=size-1;k<j;k++,j--){
        char temp=str[k];
        str[k]=str[j];
        str[j]=temp;
    }
    int m=0;
    while(str[m]!=0){
        printf("%c",str[m]);
        m++;
    }
    return 0;
}