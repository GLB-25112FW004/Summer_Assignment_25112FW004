//Wap in c to rotate Array right:

#include<stdio.h>
int main(){
    //Variable declaration 
    int i,size;

    //Get the size of array by the user
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];

    //Get array elements from the user
    printf("Enter the %d elements:",size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Rotate right by one position 
    int last=arr[size-1];        //Save the very last number
    for(i=n-1;i>0; i--){
        arr[i]= arr[i-1];       //Shift every element to the right
    }
    //Saved element to the front position 
    arr[0]= last;

    //Final output
    printf("Rotated array to the right by one position:");
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    return 0;
}