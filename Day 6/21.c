//Wap in c to convert decimal to binary equivalent:

#include<stdio.h>
int main(){

    //Variable declaration 
    int decimal, rem, temp;
    long long ans=0,contri=1;

    //Input by the user
    printf("Enter the decimal number to convert into binary equivalent:");
    scanf("%d",&decimal);

    //For zero as the input number
    if(decimal==0){
        printf("Binary equivalent: 0\n");
        return 0;
    }

    //Ensure the input number is positive integer 
    if(decimal<0){
        printf("Please enter a positive integer.\n");
        return 1;
    }
    
    //Saving original value
    temp= decimal;

    //Converting decimal to binary
    while(decimal>0){
        rem= decimal% 2;                   //Getting the last digit
        if(rem==1){
            ans+= contri;
        }
        decimal= decimal/ 2;
        contri*= 10;
    }

    printf("The Binary Equivalent of %d is %lld. \n", temp,ans);
    return 0;
}