//Wap in c to create voting eligibility system:

#include<stdio.h>
int main(){

    //Variable declaration
    int age;

    //Take input from the user 
    printf("Enter the age to check for voting eligibility:");
    scanf("%d", &age);

    //Checking the input
    if(age <= 0){
        printf("Invalid age! Please enter a valid input.\n");
    }

    //Checking the voting criteria
    //Final output
    if(age>=18){
        printf("Congratulations! You are eligible for voting.\n");
    }
    else{
        printf("You are not eligible to vote yet!\n");
    }

    return 0;
}