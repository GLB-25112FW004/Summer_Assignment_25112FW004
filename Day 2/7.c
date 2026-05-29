//Wap in c to find the product of digits of a number:

#include<stdio.h>
int main(){

    int num,dig,product=1;                          //Variable declaration

    printf("Enter the number to find the product of its digits:");
    scanf("%d",&num);                              //Input by the user

    if(num==0){                                    //Condition for the number zero
        product=0;
    }
    else{
        if(num<0){                                //Convert negative numbers to positive 
            num=-num;
        }
        while(num>0){.                           //Using while loop to calculate product
        dig= num %10;
        product= product *dig;
        num= num /10;
        }
    }
    printf("The product of the digits of given number is %d \n",product);  //Final output

    return 0;
}
