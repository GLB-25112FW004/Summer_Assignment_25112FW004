//Wap in c to remove duplicates from array:

#include<stdio.h>
int main(){
    //Variable declaration 
    int i,j,size;

    //Get the size of array from the user
    printf("Enter the size of array:");
    scanf("%d", &size);

    int arr[size];

    //Get array elements from the user
    printf("Enter the %d elements:\n", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    //Index to keep track of unique elements position 
    int uniquecount=1;

    for(i=1; i<size; i++){
        int isduplicate=0;

        //Check if current element was already seen in the unique part
        for(j=0; j<uniquecount; j++){
            if(arr[i]==arr[j]){
                isduplicate=1;
                break;
            }
        }
        //If it is new unique element move it to unique section
        if(isduplicate==0){
            arr[uniquecount]= arr[i];
            uniquecount++;
        }
    }

    //Final output
    printf("\nArray after removing duplicates:\n");
    for(i=0; i<uniquecount; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
    

}