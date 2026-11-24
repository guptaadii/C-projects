// During online event registration, some student IDs were recorded multiple times due to a technical issue. Given the array of IDs, produce a revised array containing each ID only once while preserving the order of its first occurrence. 

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of IDs: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        printf("Enter ID: ");
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<n-1; k++){
                    arr[k]=arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Revised array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
