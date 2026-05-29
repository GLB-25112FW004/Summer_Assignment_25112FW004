#include<stdio.h>
int main(){
    int i,num;                         //Variable declaration 

    printf("Enter the value of number to print the multiplication table:");
    scanf("%d",&num);                  //Input by the user

    printf("The multiplication table of %d is:",num);

    for(i=1;i<=10;i++){.               //Using for loop to print table 
        printf("%d * %d = %d \n",num,i,num*i);
    }
    return 0;
}
    
