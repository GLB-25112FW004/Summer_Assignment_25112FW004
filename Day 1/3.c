#include<stdio.h>
int main(){
    int i,num,fact=1;                              //Variable declaration 

    printf("Enter the value of number to find the factorial:");
    scanf("%d",&num);                             //Input by the user

    if(num<0){                                    //Condition check
        printf("Error! Factorial of negative number does not exist");
    }

    else{
        for(i=1;i<=num;i++){                      //Using for loop to calculate 
        fact=fact*i;
    }

    printf("The factorial of the given number is %d", fact);         //Final Output 
    }

    return 0; 
}
