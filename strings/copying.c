// A file system duplicates filenames before editing. Implement a solution to copy a string into another.
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
    char str2[size];
    int m=0;
    while(str[m]!='\0'){
        str2[m]=str[m];
        m++;
    }    
    int l=0;
    printf("Copied String is: ");
    while(str2[l]!='\0'){
        printf("%c",str2[l]);
        l++;
    }

    return 0;
}


