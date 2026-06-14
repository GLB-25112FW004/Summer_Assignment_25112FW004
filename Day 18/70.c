//Wap in c for Selection sort:

//Function to print array elements 
void printarray(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

//Function to perform selection sort
void selectionsort(int arr[], int n){
    int temp,i,j;
    for(i=0; i<n-1; i++){
        //small stores index of smallest element found
        int small=i;
        for(j=i+1;j<n; j++){
            if(arr[j]<arr[small]){
                small=j;               //Update to the new smallest elements position 
            }
        }
        //Swap elements if a smaller value was found
        if(small!=i){
            temp=arr[small];
            arr[small]=arr[i];
            arr[i]=temp;
        }
    }
}

int main(){
    int n;

    //Get size of array from user
    printf ("Enter the number of elements:");
    scanf("%d", &n);

    int arr[n];

    //Get array elements from user
    printf("Enter the %d elements:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    //Print original array
    printf("Original array:");
    printarray(arr,n);

    //Function calling
    selectionsort(arr,n);

    //Print sorted array
    printf("Sorted array:");
    printarray(arr,n);

    return 0;


}