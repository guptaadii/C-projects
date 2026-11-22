// find all triplets whose sum=x

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter the arr[%d] element: ",i);
        scanf("%d",&arr[i]);
    }
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for(int j=0;j<n;j++){
        for(int k=j+1;k<n;k++){
            for(int l=k+1;l<n;l++){
                if(arr[j]+arr[k]+arr[l]==x) printf("%d + %d + %d = %d\n",arr[j],arr[k],arr[l],x);
            }
        }
    }
    return 0;
}