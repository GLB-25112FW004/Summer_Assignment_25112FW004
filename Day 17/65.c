//Wap in c to Merge Arrays:

#include<stdio.h>
int main(){
    //Variable declaration
    int size1, size2, i;

    //Get the size of first array from the user
    printf("Enter the size of first array:");
    scanf("%d", &size1);

    int arr1[size1];

    //Get first array elements from the user
    printf("Enter the %d elements into the first array:\n", size1);
    for(i=0; i<size1; i++){
        scanf("%d", &arr1[i]);
    }

    //Get the size of second array from the user
    printf("Enter the size of second array:");
    scanf("%d", &size2);

    int arr2[size2];

    //Get second array elements from the user
    printf("Enter the %d elements into the second array:\n", size2);
    for(i=0; i<size2; i++){
        scanf("%d", &arr2[i]);
    }

    //Create merged array
    int mergedsize= size1+size2;
    int merged[mergedsize];

    //Copy first array elements
    for(i= 0; i<size1; i++){
        merged[i]=arr1[i];
    }

    //Copy second array elements 
    for(i=0; i<size2; i++){
        merged[size1+ i]=arr2[i];
    }

    //Final output 
    printf("Merged array:");
    for(i=0; i<mergedsize; i++){
        printf("%d ", merged[i]);
    }
    printf("\n");
    
    return 0;

}