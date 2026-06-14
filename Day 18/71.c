//Wap in c to Binary search:

#include<stdio.h>
int main(){

    //Variable declaration 
    int n,target, beg,mid,end;
    int found=0;

    //Get size of array from user
    printf("Enter the size of array:");
    scanf("%d", &n);

    int arr[n];

    //Get array elements from user
    printf("Enter the %d elements in sorted way:\n", n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    //Get target element to search
    printf("Enter the number to find:");
    scanf("%d", &target);

    //Binary search logic
    beg=0;
    end= n-1;

    while(beg<=end){
        mid= (beg+end)/2;

        if(arr[mid]==target){
            printf("Found at index %d.\n", mid);
            found=1;
            break;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            beg= mid+1;
        }
    }

    //If element not found
    if(found==0){
        printf("Not found.\n");
    }
    return 0;
}
