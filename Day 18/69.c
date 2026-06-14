//Wap in c to Bubble Sort:

#include<stdio.h>

//Function to perform bubble sort
void bubblesort(int arr[], int n){
    int i,j,temp;
    int swapped;

    //Outer loop runs for each pass
    for(i=0; i<n-1; i++){
        swapped=0;                    //Reset flag for current turn

        //Inner loop compares adjacent elements 
        for(j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){

                //Swap the elements 
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;

                swapped=1;             //Mark that a swap occured
            }
        }

        //If no element were swapped in this turn, arrayis already sorted
        if(swapped==0){
            break;
        }
    }
}

//Function to print the array elements 
void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

}

int main(){
    int n,i;

    //Get size of array from user
    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    //Get array elements from user
    print("Enter the %d elements:\n", n);
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Print original array
    printf("Original array:\n");
    printarray(arr,n);

    //Function calling 
    bubblesort(arr,n);

    //Print sorted array
    printf("Sorted array in ascending order:\n");
    printarray(arr,n);

    return 0;
}