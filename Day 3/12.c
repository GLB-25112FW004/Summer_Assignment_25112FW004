//Wap in c to print LCM of two numbers:

#include<stdio.h>
int main(){

    //Variable declaration
    int num1,num2,max;

    //Input from the user
    printf ("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);

    //LCM is never less than the maximum of the two numbers
    max=(num1>num2)? num1 : num2;

    while(1){                                  //For continuous loop
        if(max% num1 == 0 && max% num2 == 0){
            printf("LCM is %d.\n",max);
            break;
        }
        max++
    }

    return 0;
}