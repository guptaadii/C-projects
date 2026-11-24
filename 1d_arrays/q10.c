    // A student's marks across consecutive tests are stored in an array. Find the length of the longest contiguous sequence in which every mark is strictly greater than the preceding mark. 


    #include <stdio.h>
    int main(){
        int N;
        printf("Enter the number of tokens: ");
        scanf("%d",&N);

        int arr[N];

        for(int i=0;i<N;i++){
            printf("Enter token number %d: ",i+1);
            scanf("%d",&arr[i]);
        }
        int streak=1;
        int max_streak=1;
        for (int i=0;i<N-1;i++){
            if(arr[i]<arr[i+1]) streak++;
            else streak=1;
            if(streak>max_streak) max_streak=streak;
        }
        printf("Longest increasing sequence: %d",max_streak);
        return 0;
    }