//Wap in c to find nth Fibonacci term:

#include<stdio.h>
int main(){

    //Variable declaration
    int num,i, term1=0,term2= 1, nextterm;

    //Input by the user
    printf("Enter the term of Fibonacci series to print:");
    scanf("%d",&num);

    //Getting the desired value of series
    //since first term and second term already set, value of i starts with 2
    for(i=2;i<=num;i++){
        nextterm= term1 + term2;
        term1= term2;
        term2= nextterm;
    }

    //Getting output 
    if(num==0){
        printf("Required value of Fibonacci series is %d \n", term1);
    }
    else{
        printf("Required value of Fibonacci series is %d \n", term2);
    }

    return 0;
}
    

