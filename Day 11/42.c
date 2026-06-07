//Wap in c to find maximum using function:

#include<stdio.h>

//Function prototype declaration 
int findmax(int num1, int num2);

int main(){

    //Variable declaration 
    int a, b, max;

    Input by the user
    printf("Enter the two integers to find the maximum:");
    scanf("%d%d", &a, &b);

    //Function calling
    max=findmax(a,b);

    //Final output
    printf("The maximum of the two integers is %d", max );

    return 0;
}

//Function definition
int findmax(int num1, int num2){
    if(num1>num2){
        return num1;
    }
    else{
        return num2;
    }
}