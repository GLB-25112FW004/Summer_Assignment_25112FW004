#include<stdio.h>
int main(){
    int i,num,sum=0;               //Variable declaration

    printf("Enter the value of number:");
    scanf("%d",&num);             // Input by the user

    for(i=0;i<=num;i++){          // Using for loop
        sum=sum+i;
    }

    printf("The value of the total sum is %d", sum);   // Final Output 
    return 0;
} 
