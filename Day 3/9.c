//Wap in c to find whether a number is prime:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,num,star;       

    printf("Enter a number to check:");
    //Input number by the user
    scanf("%d",&num);                    
    
    star=0;

    //Condition for one as a Input number 
    if(num<=1){                           
        star=1;
    }

    //Using for loop to check for prime number
    else{
        for(i=2;i<num;i++){              
            if(num%i==0){
                star=1;
                break;
            }
        }
    }

    //Checking final output:

    if(star==1){
        printf("%d is not a prime number. \n",num);
    }

    else{
        printf("%d is a prime number. \n",num);
    }

    return 0;
}
