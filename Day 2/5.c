//Wap in c to find the sum of the digits of a number:

#include<stdio.h>
int main(){

    int num,dig,sum=0;                     //Variable declaration 
 
    printf("Enter the number to find the sum of its digits:");
    scanf("%d",&num);                      //Input from the user

    if(num<0){
        num= -num;
    }

    while(num>0){
        dig= num % 10;                     //To get the last digit of the number
        sum+= dig;                         //Adding the digit to the sum
        num/= 10;                          //To remove the last digit and continue 
                                           // iteration from rest of the number
    }


    printf("Sum of digits of the given number = %d \n",sum);      //Final output

    return 0;

}