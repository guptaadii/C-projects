//add new character at a user input index value
#include <stdio.h>
#include <string.h>
int main(){
    char str[20];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);

    int size=0,k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }

    int x;
    printf("Enter the index where the new charater is to be added: ");
    scanf("%d",&x);

    char new;
    printf("Enter the letter to be added at %d: ",x);
    scanf(" %c",&new);

    for(int i=size;i>=x;i--){
        str[i+1]=str[i];
    }
    str[x]=new;

    int m=0;
    while(str[m]!='\0'){
        printf("%c",str[m]);
        m++;
    }

    return 0;
}