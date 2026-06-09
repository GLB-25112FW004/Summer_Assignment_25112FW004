\\Wap in c to count Even and Odd elements: 

#include<stdio.h>
int main(){
    //Variable declaration
    int n,i;
    int evencount=0;
    int oddcount=0;

    //Input the size of array by the user
    printf("Enter the size of the array:");
    scanf("%d", &n);

    int arr[n];

    //Input elements into the array
    printf("Enter %d elements:\n",n);
    for(i=0: i<n; i++){
        printf("Element %d:", i+1);
        scanf("%d", &arr[i]);
    }

    //Check each element and count even or odd
    for(i=0; i<n; i++){
        if(arr[i]%2==0){
            evencount++;      //Increment even
        }
        else{
            oddcount++;       //Increment odd
        }
    }

    //Final output
    printf("\nTotal Even elements is %d, evencount");
    printf("\nTotal Odd elements is %d\n", oddcount);

    return 0;
}