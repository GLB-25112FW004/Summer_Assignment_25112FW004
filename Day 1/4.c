#include<stdio.h>
int main(){
    int num, count=0;                 //Variable Declaration 
    
    printf("Enter any number to check for the number of digits:");
    scanf("%d",&num);

    if(num==0){                     //Condition for Zero as a Input number 
        count=1;
    }

    else{
        if(num<0){                  // Handling Negative Numbers, convert to positive 
        num=-num;
        }

        while(num>0){.              //Count digits using While loop Condition
            num=num/10;
            count++;
        }
    }
    printf("Number of digits in the given number is %d \n",count);        //Final Output 

    return 0;
}
