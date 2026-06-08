//Wap in c for Perfect number using Function:

#include<stdio.h>

//Function declaration 
int isperfect(int num);

int main(){
    int number;

    //Input by the user
    printf("Enter a positive integer:");
    scanf("%d", &number);

    //Function calling
    if( isperfect(number)){
        printf("%d is a Perfect number.\n", number);
    }
    else {
        printf("%d is not a Perfect number.\n",number);
    }
    return 0;
}

//Function to check if number is Perfect 
int isperfect(int num){
    //0 and negative numbers cannot be perfect numbers
    if(num<=0){
        return 0;
    }

    int sum= 0;

    for(int i= 1; i<= num/2; i++){
        if(num%i==0){
            sum+= i;
        }
    }
    //Returns 1, if true
    if(sum==num){
        return 1;
    }
    else{
        return 0;
    }
}