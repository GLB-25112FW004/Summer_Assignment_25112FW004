//Wap in c to find the factorial of a given number using Function:


#include<stdio.h>

//Function declaration prototype
long long findfactorial(int n);

int main(){
    //Variable declaration 
    int num;
    long long result;

    //Input by the user
    printf("Enter any positive integer to calculate factorial:");
    scanf("%d", &num);

    //Factorial is not defined for negative integers
    if(num<0){
        printf("Error: Factorial is not defined for negative numbers.\n");
    }
    else{
        //Function calling
        result= findfactorial (num);
        printf("Factorial of %d is %lld\n", num,result);
    }
    return 0;
}

//Function definition 
long long findfactorial(int n){
    long long fact=1;

    //Loop to multiply numbers from 1 to n
    for(int i=1; i<=n; i++){
        fact*= i;
    }
    return fact;
}