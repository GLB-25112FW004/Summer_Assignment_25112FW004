//Wap in c to find pair with given sum:

#include<stdio.h>
int main(){

    //Variable declaration
    int i,j,size, sum,found=0;

    //Get size of array from the user
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];

    //Get array elements from the user
    printf("Enter %d elements:\n", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Get required sum value from user
    printf("Enter required sum:");
    scanf("%d", &sum);

    //Finding the pair
    for(i=0; i<size; i++){
        for(j= i+1; j<size; j++){
            if(arr[i]+ arr[j]==sum){
                printf("Pair found: %d + %d\n", arr[i], arr[j]);
                found=1;
                break;
            }
        }
        if(found==1) break;
    }
    if(found==0){
        printf("No pair found with sum %d.\n", sum);
    }
    return 0;
}