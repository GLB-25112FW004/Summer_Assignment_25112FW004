//Wap in c to find sum and average of Array:

#include<stdio.h>
int main(){

    //Variable declaration
    int n,i;
    int sum=0;
    float average;

    //Input the size of the array by the user
    printf("Enter the size of Array:");
    scanf("%d", &n);

    int arr[n];

    //Input elements into the array
    printf("Enter the %d elements:\n", n);
    for(i=0; i<n; i++){
        printf("Element %d:", i+1);
        scanf("%d", &arr[i]);
        sum+= arr[i];                  //Add each element
    }

    //Calculate average 
    average= (float)sum/n;

    //Final output 
    printf("\nSum of array elements=%d",sum);
    printf("\nAverage of array elements=%.2f\n",average);

    return 0;
}
