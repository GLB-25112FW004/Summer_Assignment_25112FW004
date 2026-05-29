//Wap in c to check whether a number is palindrome:

#include<stdio.h>
int main(){
    int num,reverse=0,remainder,original;             //Variable Declaration 

    printf("Enter the number to check:");
    scanf("%d",&num);                                 //Input by the user

    original=num;

    if(num==0){                                       //Condition for Zero as Input
        printf("%d is a palindrome. \n",num);
        return 0;
    }

    while(num>0){                                 //Using while loop to calculate reverse
        remainder= num %10;
        reverse= reverse*10 + remainder;
        num=num/ 10;
    }

    if(original==reverse){                            //Checking palindrome's condition 
        printf("%d is a palindrome.\n", original);
    }
    else{
        printf("%d is not a palindrome.\n",original);
    }
    return 0;
}
