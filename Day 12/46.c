//Wap in c for Armstrong number using Function:

#include<stdio.h>
#include<math.h>

//Function to check For Armstrong number
//Returns 1 if true, 0 if false

int isarmstrong(int num){
    int original= num;
    int temp=num;
    int sum= 0;
    int digits= 0;
    int remainder;

    //Count total number of digits
    while(temp>0){
        digits++;
        temp= temp/10;
    }
    temp= num;       // Reset temp to original number

    //Calculate the sum of digits raised to power of total digits
    while(temp>0){
        remainder= temp%10;
        sum= sum+ round(pow(remainder,digits));
        temp= temp/10;
    }
    //Compare total sum with original number 
    if(sum== original){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int number;

    //Input by the user
    printf("Enter any number to check:");
    scanf("%d", &number);

    //Function calling
    if(isarmstrong(number)){
        printf("%d is an Armstrong number.\n");
    }
    else{
        printf("%d is not an Armstrong number.\n");
    }
}