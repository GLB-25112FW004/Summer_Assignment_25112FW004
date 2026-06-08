//Wap in c for Palindrome using Function:

#include<stdio.h>

//Function to check Palindrome
//Returns 1 if True, 0 if False
int ispalindrome(int num){
    int original= num;
    int reversed=0;
    int remainder;

    //Loop to reverse the digits of the number
    while(num>0){
        remainder= num%10;
        reversed= (reversed*10)+ remainder;
        num= num/10;
    }
    //Compare original number with the reversed number
    if(original==reversed){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int number;

    //Input by the user
    printf("Enter any number to check:");
    scanf("%d", &number);

    //Function calling
    if(ispalindrome(number)){
        printf("%d is a Palindrome number.\n", number);
    }
    else{
        printf("%d is not a Palindrome number.\n", number);
    }
    return 0;
}