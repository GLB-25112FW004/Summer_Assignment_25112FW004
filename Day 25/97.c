//Wap in c to merge two sorted arrays:

#include<stdio.h>
int main(){
    int n1,n2;

    //Get array sizes from the user
    printf("Enter size of first array:");
    scanf( "%d",&n1);
    printf("Enter size of second array");
    scanf("%d",&n2);

    int arr1[n1];
    int arr2[n2];
    int merged[n1+n2];       //Merged size of both arrays

    //Get elements for the first sorted array
    printf("Enter the %d sorted elements for array 1:\n", n1);
    for(int i=0; i<n1; i++){
        scanf("%d", &arr1[i]);
    }

    //Get elements for the second sorted array
    printf("Enter the %d sorted elements for array 2:\n", n2);
    for(int i=0; i<n2; i++){
        scanf("%d", &arr2[i]);
    }

    //Compare and merge elements
    int i=0, j=0, k=0;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            merged[k]=arr1[i];
            i++;
        }else{
            merged[k]=arr2[j];
            j++;
        }
        k++;
    }

    //Copy remaining elements from array 1
    while(i<n1){
        merged[k]=arr1[i];
        i++;
        k++;
    }

    //Copy remaining elements from array 2
    while(j<n2){
        merged[k]=arr2[j];
        j++;
        k++;
    }

    //Final output 
    printf("\nMerged sorted array:\n");
    for(k=0; k<(n1+n2);k++){
        printf("%d", merged[k]);
    }
    printf("\n");

    return 0;




    
}