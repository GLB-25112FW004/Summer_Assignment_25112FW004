//Wap in c to find Fibonacci series using Recursion:

#include<stdio.h>

//Function Declaration 
long long Fibonacci(int n);

int main(){

    //Variable declaration 
    int terms,i;

    //Input by the user
    printf("Enter the number of terms of Fibonacci series:");
    scanf("%d", &terms);

    //Handling negative integers and zero as input
    if(terms<=0){
        printf("Error: Number of terms must be positive integer.\n");
    }

    else{
        printf("Fibonacci Series till %d terms:\n",terms);

        //Final output
        for(i=0;i<terms;i++){
            printf ("%lld", Fibonacci(i));
        }
        printf("\n");
    }
    return 0;
}

//Recursive Function
int Fibonacci(int n){
    if(n==0){.               
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        //Exhibits when n is 2 or greater
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}
