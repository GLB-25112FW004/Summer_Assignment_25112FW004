//Wap in c to sort array in descending order:

#include<stdio.h>
int main(){

    //Variable declaration
    int i,j,temp,size;

    //Get the size of array from user
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];

    //Get array elements from user
    printf("Enter the %d elements in the array:",size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Logic for sorting elements in descending order
    for(i=0; i<size-1; i++){
        for(j=i+1; j<size; j++){
            //Swap elements
            if(arr[i]<arr[j]){
                temp= arr[i];
                arr[i]= arr[j];
                arr[j]=temp;
            }
        }
    }

    //Print sorted array in descending order
    printf("\nArray sorted in descending order:\n");
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;

}

