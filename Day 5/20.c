//Wap in c to find the largest prime factor of a number:

#include<studio.h>
int main(){

    //Variable declaration 
    int num,i, largest=0;

    //Taking Input from the user
    printf("Enter the number to find its largest prime factor:");
    scanf("%d",&num);

    //Ensure the input number is a positive integer 
    if(num<=0){
        printf("Error!Please enter valid number to find the largest prime factor");
        return 1;
    }

    //Case for one as input number
    if(num==1){
        printf("1 has no prime factors.\n");
        return 0;
    }

    //Saving original number
    int original= num;

    //Divide by 2 repeatedly
    while(num%2== 0){
        largest= 2;
        num/= 2;
    }

    //Divide by odd numbers startimg from 3, skip even numbers
    for(i=3;i*i<= num;i+=2){
        while(num%i == 0){
            largest=i;               // Assigning current value of i to largest
            num/=i;                  //Updating number
        }
    }

    // If number is still greater than 1, it is a prime factor 
    if( num>1){
        largest= num;
    }

    //Final output
    printf("The largest prime factor of the number %d is :%d \n", original,largest);

    return 0;
}