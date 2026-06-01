//Wap in c to print factors of a number:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,num;

    //Input from the user
    printf("Enter the number to find its factors:");
    scanf("%d",&num);

    //Ensure the input number is a positive integer
    if(num<=0){
        printf("Please enter a valid number to find the factors.");
        return 1;
    }

    //Final output 
    printf("Factors of the number %d are:",num);

    //Checking factors of the number
    for(i=1;i<=num,i++){
        //Number divides i perfectly, it is a factor 
        if(num%i==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
    