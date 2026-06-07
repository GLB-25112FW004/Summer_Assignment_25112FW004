//Wap in c to Check For Prime number using Function:

#include<stdio.h>

//Function Definition
int isprime(int num){
    if(num<=1){
        return 0;                       //For negative integers and 1 as input
    }
    for(int i=2; i<= num/2; i++){       //Checking Factors of the number
        if(num%i == 0){
            return 0;                   //Returns False
        }
    }
    return 1;                           //Returns True
}

int main(){
    //Variable declaration 
    int number, result;

    //Input by the user
    printf("Enter the number to check: ");
    scanf("%d", &number);

    //Function Calling
    result= isprime(number);

    //Final output
    if(result==1){
        printf("%d is a Prime Number" ,number);
    }
    else{
        printf("%d is not a Prime Number", number);
    }
}