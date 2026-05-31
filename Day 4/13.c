//Wap in c to generate Fibonacci series:

#include<stdio.h>
int main(){

    //Variable declaration 
    int num,i, term1=0,term2= 1, nextterm;

    //Taking input from the user
    printf("Enter the number of terms of Fibonacci series:");
    scanf("%d",&num);

    //Checking the input for zero and negative number
    if(num<=0){
        printf("Please Enter valid number of terms.\n");
        return 1;
    }

    //Final output
    printf("Fibonacci series:");

    for(i=1;i<=num,i++){

        printf("%d", term1);

        if(i<n){
            printf(",");
        }

        nextterm= term1 + term2;
        term1 = term2;
        term2 = nextterm;
    }
    
    printf("\n");
    return 0;
}