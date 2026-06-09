//Wap in c to input and display Array:

#include<stdio.h>
int main(){
    //Variable declaration 
    int n, i;

    //Input by the user
    printf("Enter the size of the array:");
    scanf("%d",&n);

    //Declare an array of size n
    int arr[n];

    //Input elements in the array
    printf("Enter %d elements:\n",n);
    for(i=0; i<n; i++){
        printf("Element %d:",i+1);
        scanf("%d", arr[i]);
    }

    //Display the elements of the array
    printf("\nThe elements in the array:");
    for(i=0; i<n; i++){
        printf("%d", arr[i]);
    }
    printf("\n");

    return 0;
}

