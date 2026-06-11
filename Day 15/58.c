//Wap in c to rotate Array left:

#include<stdio.h>
int main(){
    //Variable declaration 
    int i,size;

    //Get the size of array by the user
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];

    //Get the array elements by the user
    printf("Enter the %d elements:\n" , size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Rotate left by one position 
    int first= arr[0];             //Save the first element of array
    for(i=0; i<size-1; i++){
        arr[i]=arr[i+1];          //Shift every element to the left
    }
    //Saved number at the end
    arr[size-1]= first;

    //Final output
    printf("Rotated left by one position:");
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    return 0;
}