//Wap in c to find second largest element :

#include<stdio.h>
int main(){
    int arr[100], size;
    int largest, seclargest;

    //Input size of array by the user
    printf ("Enter the size of array:");
    scanf("%d", &size);

    //Get elements into the array
    printf("Enter the %d elements:", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Variable initialisation 
    largest=arr[0];
    seclargest=-1;

    
    fof(int i=1; i<size; i++){
        if(arr[i]>largest){
            seclargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>seclargest && arr[i]>largest){
            seclargest= arr[i];
        }
    }

    //Final output
    if(seclargest==-1 || largest == seclargest){
        printf("No distinct second largest element found.");
    }
    else{
        printf("Second largest element is %d", seclargest);
    }
    return 0;
}