//Wap in c to find Union of arrays:

#include<stdio.h>
int main(){
    //Variable declaration 
    int size1, size2, i;


    //Get size of first array from user
    printf("Enter the size of first array:");
    scanf("%d", &size1);

    int arr1[size1];

    //Get first array elements from user
    printf("Enter the %d elements into the first array:", size1);
    for(i=0; i<size1; i++){
        scanf("%d", &arr1[i]);
    }

    //Get size of second array from user
    printf("Enter the size of second array:");
    scanf("%d", &size2);

    int arr2[size2];

    //Get second array elements from user
    printf("Enter the %d elements into the second array:", size2);
    for(i=0; i<size2; i++){
        scanf("%d", &arr2[i]);
    }

    //Result array and counter variable 
    int result[size1+size2];
    int k=0;

    //Copy all elements of first array to result
    for(i=0; i<size1; i++){
        result[k]=arr1[i];
        k++;
    }

    //Add elements from second arrays only if they are not in result
    for(i=0; i<size2; i++){
        int isduplicate=0; 

        for(int j=0; j<k; j++){
            if(arr2[i]==result[j]){
                isduplicate=1;
                break;
            }

        }
        if(isduplicate==0){
            result[k]=arr2[i];
            k++;
        }
    }

    //Final output
    printf("Union of arrays:");
    for(i=0; i<k; i++){
        printf("%d", result[i]);
    }
    printf("\n");

    return 0;


}