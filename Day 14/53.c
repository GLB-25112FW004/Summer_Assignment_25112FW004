//Wap in c to Linear Search:

#include<stdio.h>

//Function to perform linear search
int linearsearch(int arr[], int size,int target){
    for(int i=0; i<size; i++){
        if(arr[i]== target){
            return i;
        }
    }

    //If target not found, return -1
    return -1;
}
int main(){
    int size,target, result;

    //Take number of elemnts by the user
    printf("Enter the number of elements in the array:");
    scanf("%d", &size);

    int arr[size];

    //Read array elements 
    printf("Enter the %d elements:\n", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Input target element by the user
    printf("Enter the element to search for:");
    scanf("%d",&target);

    //Function calling 
    result=linearsearch(arr,size,target);

    //Final output
    if(result!=-1){
        printf("Element found at index:%d\n", result);
    }
    else{
        printf("Element not found in the array.\n");
    }
    return 0;
}
