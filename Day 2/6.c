//Wap in c to find the reverse of a number:

#include<stdio.h>
int main(){
    
    int num,reverse=0,remainder;                   //Variable declaration

    printf("Enter the number to find its reverse:");    
    scanf("%d",&num);                       

    while(num!=0){                                 //Using while loop for condition 
        remainder= num% 10;                        //To get the last digit of the number
        reverse= reverse*10 + remainder;           //Appending it to reverse
        num/= 10;                                  //Removing the last digit
    }

    printf("The reverse of the given number is %d \n",reverse);   //Final output
    
    return 0;
}

