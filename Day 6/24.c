//Wap in c to find x ^ n without using pow() function:

#include<stdio.h>
int main(){

    //Variable declaration 
    double x;
    int n, total, i;
    double answer= 1.0;

    //Input base number by the user
    printf("Enter the base number to calculate x^n :");
    scanf("%lf",&x);

    //Input power by the user
    printf("Enter the power to calculate x^n :");
    scanf("%d",&n);

    //Clarify for both positive and negative powers
    total=n;
    if(n<0){
        total= -n;               //Turns negative to positive power
    }

    //Calculate x^n by using for loop
    for(i=0; i<total;i++){
        answer= answer * x;
    }

    //Output for negative powers
    if(n<0){
        answer= 1.0/ answer;
    }

    //Final output
    printf("The Resultant value is: %.4f\n", answer);
    return 0;
}

    