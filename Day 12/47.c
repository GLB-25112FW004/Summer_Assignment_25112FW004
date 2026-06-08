//Wap in c For Fibonacci using function:

#include<stdio.h>
//Function for fibonacci sequence 
void printfibonacci(int n){
    int t1= 0, t2= 1, nextterm;

    printf("Fibonacci sequence:");

    for(int i=1; i<=n,++i){
        printf("%d", t1);
        nextterm= t1+ t2;
        t1= t2;
        t2= nextterm;
    }
    printf("\n");
}
int main(){
    int terms;

    //Input by the user
    printf("Enter the number of terms:");
    scanf("%d", &terms);

    //Final output
    if(terms<=0){
        printf("Please enter a positive integer .\n");
    }else{
        printfibonacci(terms);           //Function calling 
    }
    return 0;
}