//Wap in c to find Common elements in array:

#include<stdio.h>
int main(){

    //Variable declaration 
    int size1, size2, i,j;

    //Get size of first array from user
    printf("Enter the size of First array:");
    scanf("%d", &size1);

    int arr1[size1];
    
    //Get first array elements from user
    printf("Enter the %d elements into first array:", size1);
    for(i=0; i<size1; i++){
        scanf("%d", &arr1[i]);
    }

    //Get size of second array from user
    printf("Enter the size of Second array:");
    scanf("%d", &size2);

    int arr2[size2];

    //Get second array elements from user
    printf("Enter the %d elements into second array:", size2);
    for(i=0; i<size2; i++){
        scanf("%d", &arr2[i]);
    }

    //Final output
    printf("Common elements in the arrays:");

    //Compare every element of arr1 with arr2
    for(i=0; i<size1; i++){
        for(j=0; j<size2; j++){
            if(arr1[i]==arr2[j]){
                printf("%d ", arr1[i]);
                break;                     //Move to the next element in arr1
            }
        }
    }
    printf("\n");


}