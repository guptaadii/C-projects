//print all the characters with their ascii values

#include <stdio.h>
int main(){
    char c;
    int i=65;
    while (i<=90){
        c=i;
        printf("The ASCII value of %c is %d\n",c,i);
        i++;
    }
    int j=97;
    while (j<=122){
        c=j;
        printf("The ASCII value of %c is %d\n",c,j);
        j++;
    }


    return 0;
}