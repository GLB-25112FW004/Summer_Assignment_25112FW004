//Wap in c to find maximum frequency element:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,j,size;

    //Get size of array from the user
    printf("Enter the size of Array:");
    scanf("%d", &size);

    int arr[size];

    //Get array elements from the user
    printf("Enter the %d elements:\n", size);
    for(i= 0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //variable initialisation 
    int max_element=arr[0];
    int max_count=0;

    for(i=0; i<size; i++){
        int count=0;

        for(j=0; j<size; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        //If current element's count is higher, update max values
        if(count>max_count){
            max_count=count;
            max_element=arr[i];
        }
    }

    //Final output
    printf("\nMaximum frequency element:%d\n", max_element);
    printf("Frequency:%d times\n", max_count);

    return 0;
}