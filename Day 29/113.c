//Wap in c to create Menu Driven Calculator: 

#include<stdio.h>
#include<stdlib.h>

int main(){
    int choice;
    double num1, num2, result;

    //Continuous loop for the menu interface
    while(1){
        printf("\n--------------------------------------\n");
        printf("          Menu Driven Calculator        \n");
        printf("\n--------------------------------------\n");
        printf("1. Addition(+)\n");
        printf("2. Subtraction(-)\n");
        printf("3. Multiplication(*)\n");
        printf("4. Division(/)\n");
        printf("5. Exit\n");
        printf("----------------------------------------\n");
        printf("Enter the choice(1-5): ");

        //Read user menu selection
        if(scanf("%d", &choice) != 1){
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');    // Clear input buffer
            continue;
        }

        //Handle early exit condition
        if(choice==5){
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        //Validate menu range before asking for operands
        if(choice<1 || choice>5){
            printf("Error! Invalid choice! Please select an option between 1 and 5:\n");
            continue;
        }

        //Process arithmetic operation:
        switch (choice) {
            case 1:
                result=num1+num2;
                printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 2:
                result=num1-num2;
                printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 3:
                result=num1*num2;
                printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case 4:
                //Error checking for division by zero
                if(num2 == 0){
                    printf("Error: Division by zero is undefined!\n");
                }else{
                    result=num1/num2;
                    printf ("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
        }

    }
    return 0;
}