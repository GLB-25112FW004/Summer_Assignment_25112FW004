//Wap in c to find frequency of an element in array:

#include<stdio.h>
int main(){
    int arr[100], size,target,count=0;

    //Get size of array by the user
    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

    //Input target elements 
    printf("Enter the %d elements:", size);
    for(int i=0; i<size; i++){
        scanf("%d", arr[i]);
    }

    //Get target element by the user
    printf("Enter the element to find its frequency:");
    scanf("%d", &target);

    //Loop to count occurences
    for(int i=0; i<size; i++){
        if(arr[i]==target){
            count++;
        }
    }

    //Final output
    printf("The element %d occurs %d times.\n", target, count);
    return 0;
}