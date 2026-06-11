//Wap in c to reverse array:

#include<stdio.h>
int main(){
    //Variable declaration 
    int i,size,temp;

    //Get size of array by the user
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];

    //Get array elements from the user 
    printf("Enter %d elements:\n", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Reverse the array
    for(i=0; i<size/2; i++){
        temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }

    //Final output
    printf("Reversed array:");
    for(i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    return 0;
}

