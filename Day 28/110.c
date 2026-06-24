//Wap in c to create Bank Account System: 

#include<stdio.h>
#include<string.h>

struct BankAccount {
    int accountNum;
    char name;
    float balance;
};

//Functions now return the updated structure
struct BankAccount createAcc();
struct BankAccount deposit(struct BankAccount acc);
struct BankAccount withdraw(struct BankAccount acc);
void checkbalance(struct BankAccount acc);

int main(){
    struct BankAccount account;
    int choice;
    int isAccountCreated = 0;

    while(1){
        printf("\n----------------Bank Account System----------\n");
        printf("1. Create Account\n2. Deposit Money\n3. Withdraw Money\n4. Check Balance\n 5. Exit\n");
        printf("Enter your choice: (1-5)");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                //Overwrites the account variable with the newly created one
                acount = createAcc();
                isAccountCreated=1;
                break;
            case 2:
                if(isAccountCreated){
                    //Passes a copy,gets updated copy back and overwrite
                    account = deposit(account);
                }else{
                    printf("Error! Please create an account first.\n");
                }
                break;
            case 3:
                if(isAccountCreated){
                    //Passes a copy, gets the updated copy back and overwrites
                    account= withdraw(account);
                }else{
                    printf("Error! Please create an account first.\n");
                }
                break;
            case 4:
                if(isAccountCreated){
                    checkbalance(account);
                }
                else{
                    printf("Error! Please create an account first.\n");
                }
                break;
            case 5:
               printf("Thank you for using our Banking System. Goodbye!!\n");
               return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}

struct BankAccount createAcc(){
    struct BankAccount acc;        //Temporary local Structure 
    printf("\nEnter Account Number :");
    scanf("%d", &acc.accountNum);

    printf("Enter Account Holder Name: ");
    getchar();
    fgets(acc.name, sizeof(acc.name), stdin);
    acc.name[strcspn(acc.name, "\n")]=0;

    printf("Enter Initial Deposit Amount: ");
    scanf("%f", &acc.balance);

    printf("\nSuccess: Account created successfully!\n");
    return acc;      //Return the whole structure back to main

}