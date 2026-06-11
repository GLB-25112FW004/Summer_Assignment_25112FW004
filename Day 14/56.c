//Wap in c to find duplicates in array:

#include<stdio.h>
int main(){

    //Variable declaration
    int size, i,j;

    //Get the size of Array by the user
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];

    //Input array elements 
    printf("Enter the %d elements:\n", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Final output 
    printf("Duplicate elements:");
    for(i=0; i<size; i++){
        for(j= i+1; j<size; j++){
            if(arr[i]==arr[j]){
                printf("%d", arr[i]);
                break;
            }
        }
    }
    printf("\n");
    return 0;

}
