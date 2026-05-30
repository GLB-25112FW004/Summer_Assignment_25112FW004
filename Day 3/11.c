//Wap in c to find the GCD of two numbers:

#include<stdio.h>
int main(){

    //Variable declaration
    int num1,num2,i;
    int gcd = 1;

    //Getting input numbers from the user
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter the second number:");
    scanf("%d",&num2);

    //Checking the numbers for gcd
    for(i=1; i<=num1 && i<=num2 ;i++){
        if(num1%i ==0 && num2%i ==0){
            gcd= i;
        }
    }

    //Final output 
    printf("GCD of %d and %d is %d",num1,num2, gcd);

    return 0;

}