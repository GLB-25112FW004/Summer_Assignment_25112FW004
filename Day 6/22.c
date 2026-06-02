//Wap in c to convert binary to decimal equivalent:

#include<stdio.h>
int main(){

    //Variable declaration 
    int binary, rem, temp;
    long long ans=0, contri=1;

    //Input by the user
    printf("Enter the binary number to convert into decimal equivalent:");
    scanf("%d", &binary);

    //For zero as the input number
    if(binary==0){
        printf("Decimal equivalent: 0\n");
        return 0;
    }

    //Ensure the input number is a positive integer
    if(binary<0){
        printf("Please enter a positive integer.\n");
        return 1;
    }

    //Saving original value
    temp= binary;

    //Converting binary to decimal
    while(binary>0){
        rem= binary% 10;                   // Get the last digit(0 or 1)
        if(rem==1){
            ans+= contri;                  // Add the current power of 2
        }
        binary= binary / 10;               // Remove the last digit
        contri*= 2;                        // Change place value
    }

    //Final output 
    printf("Decimal equivalent of %d is %lld. \n", temp, ans);
    return 0;
}