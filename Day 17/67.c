//Wap in c to find Intersection of Arrays:

#include<stdio.h>
int main(){

    //Variable declaration
    int size1, size2, i,j,k;

    //Get size of first array from user
    printf("Enter the size of first array:");
    scanf("%d", &size1);

    int arr1[size1];

    //Get first array elements from user
    printf("Enter the %d elements into first array:", size1);
    for(i=0; i<size1; i++){
        scanf("%d", &arr1[i]);
    }

    //Get size of second array from user
    printf("Enter the size of second array:");
    scanf("%d", &size2);

    int arr2[size2];

    //Get second array elements from user
    printf("Enter the %d elements into second array:", size2);
    for(i=0; i<size2; i++){
        scanf("%d", &arr2[i]);
    }

    //Final output (Removes duplicates)

    printf("Intersection of arrays:");

    //Check if we already processed this number in arr1
    for(i=0; i<size1; i++){
        int alreadyprinted=0;
        for(j=0; j<i; j++){
            if(arr1[i]==arr1[j]){
                alreadyprinted=1;        //Found a duplicate inside arr1
                break;
            }
        }

        //If it was already printed, skip and move to next item
        if(alreadyprinted==1){
            continue;
        }

        //Match against the second array
        for(k=0; k<size2; k++){
            if(arr1[i]==arr[k]){
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}