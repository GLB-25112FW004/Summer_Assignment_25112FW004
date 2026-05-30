//Wap in c to print prime numbers in a given range:

#include<stdio.h>
int main(){

    //Variable declaration
    int i,num,star,lowernum,uppernum;

    //Getting the range from the user
    printf("Enter the lower limit of range:");
    scanf("%d",&lowernum);
    printf("Enter the upper limit of range:");
    scanf("%d",&uppernum);

    printf("Prime numbers between %d and %d are:\n", lowernum, uppernum);
    //Using for loop to check each number in the given range
    for(num=lowernum ;num<=uppernum; num++){
        if(num<=1){
            continue;
        }

        //Initialise value to the variable 
        star=0;

        //Check for prime numbers 
        for(i=2;i<num;i++){
            if(num%i==0){
                star=1;                       
                break;
            }
        }

        //Print all the prime numbers
        if(star==0){
            printf("%d", num);
        }
    }
    printf("\n");

    return 0;
}
