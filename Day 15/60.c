//Wap in c to move zeroes to the end:

#include<stdio.h>
int main(){
    //Variable declaration 
    int size,i;

    //Get size of array from the user
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];
    int index=0;

    //Get array elements from the user
    printf("Enter the %d elements:\n", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Copy all non zero element to the front
    for(i=0; i<size; i++){
        if(arr[i]!=0){
            arr[index]=arr[i];
            index++;
        }
    }

    //Fill rest array with zeroes
    while(index<size){
        arr[index]=0;
        index++;
    }

    //Final output
    printf("Modified array:");
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}