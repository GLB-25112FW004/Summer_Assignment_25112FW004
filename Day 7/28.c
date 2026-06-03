//Wap in c to print the reverse of number using Recursion:

#include<stdio.h>

int reversenum(int n, int rev){

    //Base case, when number equals zero return rev value
    if(n== 0){
        return rev;
    }

    int lastdig= n%10;                   //Getting last digit of the number
    int updrev= (rev*10)+ lastdig;       //Adding to reversed number
    int remnum= num/10;                  //Updating number

    //Recursive calling
    int result= reversenum(remnum,updrev);
    return result;
}

int main(){

    //Variable declaration
    int num,reversed;

    //Input by the user 
    printf("Enter the number to get its reverse:");
    scanf("%d",&num);

    //Calling the recursive function with zero as the inital reversed value
    reversed= reversenum(num,0);

    //Final output 
    printf("Reversed number of %d is %d.\n", num,reversed);

    return 0;
}
