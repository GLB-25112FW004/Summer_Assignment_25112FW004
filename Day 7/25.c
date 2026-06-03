//Wap in c to print factorial using recursion:

#include<stdio.h>

//Function Declaration
long long factorial (int n);

int main(){

    //Variable declaration
    int num;

    //Input by the user
    printf("Enter the number to find its factorial:");
    scanf("%d",&num);

    //Handling Negative integers
    if(num<0){
        printf("Error: Factorial is not defined for negative integers.\n");
    }

    //Handling input as zero and other positive integers
    else{
        printf("Factorial of %d is %lld.\n",num, factorial(num));
    }
    return 0;
}

//Function definition 
long long factorial(int n){

    //Handling input numbers 0 and 1, in this case output is 1
    if(n==0 || n==1){
        return 1;
    }

    //Recursive Function
    return n * factorial(n-1);
}
    