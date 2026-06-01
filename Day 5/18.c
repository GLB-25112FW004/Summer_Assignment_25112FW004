//Wap in c to check for Strong Number:

#include<stdio.h>
int main(){

    //Variable declaration
    int i,num, originalnum, remainder;
    long long sum=0;                       //Factorial sum could be large

    
    //Input from the user
    printf("Enter the number to check:");
    scanf("%d",&num);

    //Negative numbers cannot be Strong Numbers
    if(num<0){
        printf("%d is not a Strong Number.\n",num);
        return 0;
    }

    //Saving original number
    originalnum=num;

    //If input number is zero
    if(num==0){
        sum=1;
    }

    else{
        while(num>0){
            remainder=num%10;                 //Getting digits

            long long fact=1;
            for(i=1;i<=remainder;i++){             //Calculating factorial of the digit 
                fact*=i;
            }

            //Getting the sum of factorial of digits
            sum+= fact;
            //Updating number              
            num/=10;
        }
    }

    //Final output
    if(sum==originalnum){
        printf("%d is a Stong Number.\n", originalnum);
    }
    else{
        printf("%d is not a Stong Number.\n",originalnum);
    }

    return 0;
}
