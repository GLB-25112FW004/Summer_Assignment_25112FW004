// Wap in c to count set bits in a number:

#include<stdio.h>

//Using function to calculate the set bits
int countsetbits(unsigned int n){                            //Function definition
    int count= 0;
    while(n>0){
        n= n & (n-1);                               // Calculate set bits
        count++;
    }
    return count;
}

int main(){

    //Variable declaration 
    int num, result;

    //Input from the user
    printf("Enter any integer to count the setbits:");
    scanf("%d",&num);

    //Function calling
    result= countsetbits(num);

    //Final output
    printf ("Total set bits in %d is: %d \n",num, result);
    return 0;
}
