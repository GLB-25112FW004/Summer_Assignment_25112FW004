//Wap in c to find the sum of two numbers using Function:

#include<stdio.h>

//Function Prototype declaration 
int addnum(int a, int b);

int main(){
    //Variable declaration 
    int num1, num2, sum;

    //Input by the user
    printf("Enter the two integers to get the sum:");
    scanf("%d%d", &num1, &num2);

    //Function Calling
    sum=addnum(num1, num2);

    //Final output
    printf("The sum of %d and %d is: %d\n", num1, num2,sum) 

    return 0;
}

//Function definition 
int addnum(int a, int b){
    return a+b;
}