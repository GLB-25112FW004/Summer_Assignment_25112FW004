//Wap in c to check for Perfect Number:

#include<stdio.h>
int main(){

    //Variable declaration
    int num,i,sum=0;

    //Input by the user
    printf("Enter the number to check:");
    scanf("%d",&num);

    //Checking the input number
    if(num<=0){
        printf("%d is not a Perfect Number.\n",num);
        return 0;
    }

    //Calculating the sum of number
    for(i=1;i<=num/2;i++){
        if(num%i==0){
            sum+= i;
        }
    }

    //Final output
    if(sum==num){
        printf("%d is a Perfect Number.\n",num);
    }
    else{
        printf("%d is not a Perfect Number.\n",num);
    }
    return 0;
}