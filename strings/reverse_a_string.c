#include <stdio.h>
#include <string.h>

int main(){
    char str[40];
    puts("Enter a string to be reversed: ");
    scanf("%[^\n]s",str);

    int size=0;
    int i=0;
    while(str[i]!='\0'){
        size=size+1;
        i++;
    }

    for(int k=0,j=size-1;k<=j;k++,j--){
        char temp=str[k];
        str[k]=str[j];
        str[j]=temp;
    }

    for(int l=0;l<=size-1;l++) printf("%c",str[l]);

    return 0;
}