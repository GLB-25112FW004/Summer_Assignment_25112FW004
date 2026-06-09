//Wap in c to find the largest and smallest element:

#include<stdio.h>
int main(){

    //Variable declaration 
    int n,i;
    int max,min;

    //Input the size of array by the user
    printf("Enter the size of the array:");
    scanf("%d", &n);

    int arr[n];

    //Input elements into the array
    printf("Enter the %d elements:\n", n);
    for(i=0; i<n; i++){
        printf("Element %d:", i+1);
        scanf("%d", &arr[i]);
    }

    //Assume the first element is both the largest and the smallest 
    max= arr[0];
    min= arr[0];

    //Compare all elements with max and min
    for(i=1; i<n; i++){
        if(arr[i]>max){
            max= arr[i];         //Update max if a larger element is found
        }
        if(arr[i]<min){
            min= arr[i];         //Update min if a smaller element is found
        }
    }

    //Final output
    printf("\nLargest element is %d", max);
    printf("\nSmallest element is %d\n", min);

    return 0;
}