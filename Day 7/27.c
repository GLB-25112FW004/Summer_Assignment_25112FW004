//Wap in c to print Sum of digits using Recursion:

#include<stdio.h>

//Recursive Function
int sumofdigits(int n){

    if(n==0){
        return 0;
    }

    //Getting last digit of the number
    int lastdig= n % 10;

    //Getting remaining numbers
    int remnum= n/ 10;

    //Recursive calling of the remaining number
    int sum= sumofdigits(remnum);

    //Output 
    return lastdig + sum
}

int main(){

    //Variable declaration 
    int num, totalsum;

    //Input by the user
    printf("Enter the number to find the sun of digits:");
    scanf("%d",&num);

    //Function calling
    totalsum= sumofdigits(num);

    //Final output 
    printf("The sum of digits of the number %d is % d.\n", num,totalsum);

    return 0;
}