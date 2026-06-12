//Wap in c to find missing number in array:

#include<stdio.h>
int findmissing(int arr[], int size){
    //Check if the number matches its expected sequential value
    for(int i= 0; i<size; i++){
        if(arr[i]!= i+1){
            return i+1;         //Found the miss
        }
    }
    return size+1;             //if no gap, last number is missing 
}

int main(){
    //Variable declaration 
    int i,size;

    //Get the size of array by the user
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];

    //Get array elements from the user(along with one missing)
    printf("Enter the %d elements:\n");
    for(i=0; i<size; i++){
        printf("Element %d:", i+1);
        scanf("%d", &arr[i]);
    }

    //Function calling
    int missing= findmissing(arr,size);

    //Final output 
    printf("\nThe missing number is %d.\n", missing);

    return 0;
}