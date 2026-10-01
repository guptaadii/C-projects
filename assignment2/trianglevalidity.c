// Triangle Validator Given three angles a, b, and c, implement a program to determine: 
// • Invalid if their sum is not 180 or any angle is 0 or negative.  
// • Acute if all three angles are less than 90.  
// • Right if exactly one angle is 90.  
// • Obtuse otherwise.  


#include <stdio.h>
int main(){
    float a,b,c;
    // a=90;
    // b=85;
    // c=5;
    if (a+b+c>180 || a,b,c<=0){
        printf("Invalid");
    }
    else if(a<90 && b<90 && c<90){
        printf("Acute");
    }
    else if(a==90 || b==90 || c==90){
        printf("Right Angled");
    }
    else{
        printf("Obtuse");
    }
    return 0;


}