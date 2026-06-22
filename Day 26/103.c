//Wap in c to create ATM simulation:

#include<stdio.h>
#include<stdlib.h>
int main(){
    int pin=0101;            //Preset pin
    int entered_pin, work, count;
    float balance=10000;     //Initial account balance
    float amount;
    char transaction='y';

    //Pin authentication
    while(entered_pin != pin){
        printf("Enter your 4 digit pin:");
        scanf("%d", &entered_pin);

        if(entered_pin != pin){
            count++;
            printf("Invalid pin! You have %d attempts left.\n", 3-count);

            if(count==3){
                printf("Too many incorrect pin attempts, Card has been blocked.\n");
                return 0;
            }
        }
    }
    printf("\nLOGIN SUCCESSFUL\n");

    //ATM menu options
    do{
        printf("\n      ATM MAIN MENU         ");
        printf("\n----------------------------");
        printf("\n(1) Check Total Balance");
        printf("\n(2) Deposit Money");
        printf("\n(3) Withdraw Money");
        printf("\n(4) Exit ");
        printf("Enter your work(1-4):");
        scanf("%d", &work);

        switch(work){
            case 1:
                printf("\n-----Balance Check-------");
                printf("\nYour current account balance is: Rs %.2f\n", balance);
                break;

            case 2:
                printf("\n-----Deposit Money-------");
                printf("\nEnter amount to deposit: Rs");
                scanf("%f", &amount);

                if(amount<=0){
                    printf("Invalid amount! Please enter a positive value.\n");
                }else{
                    balance+= amount;
                    printf("Successfully deposited money of Rs %.2f.\n", amount);                   
                    printf("New balance of your account is Rs %.2f.\n", balance);
                }
                break;

            case 3:
                printf("\n-------Withdraw Money------");
                printf("\nEnter amount to withdraw: Rs");
                scanf("%f", &amount);

                if(amount<=0){
                    printf("Invalid amount! Please enter a positive value.\n");
                }else if(amount>balance){
                    printf("Transaction failed! Insufficient balance.\n");
                }else{
                    balance-= amount;
                    printf("Please collect your cash!!\n");
                    printf("New balance of your account is Rs %.2f.\n", balance);
                }
                break;
            case 4:
                printf("\nThank you for using our ATM services!!\n");
                return 0;
                break;
            default: 
                printf("\nInvalid choice!! Please select from the given options.\n");
                break;
            }

            //Another transaction
            printf("Would you like to perform any other transaction: Y or N");
            scanf(" %c", &transaction);
        }while(transaction=='Y' || transaction == 'y');

    printf("\nThank you for using our ATM services!!\n");
    return 0;
}
