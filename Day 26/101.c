//Wap in c to create number guessing game:

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int secret_num, guess, attempts=0;

    //Random number generator using the current system time 
    srand(time(NULL));

    //Generate a random number between 1 and 100
    secret_num= (rand() % 100)+1;

    printf("------------------------------------------\n");
    printf(" Welcome To The Number Guessing Game!     \n");
    printf("------------------------------------------\n");
    printf("A number between 1 and 100 has been chosen.\n");
    printf("Can you guess what number it is?\n");

    //Standard while loop that runs continuously
    while(1){
        printf("Enter your Guesses number:");

        //Check if the entered number is a valid integer
        if(scanf("%d", &guess) != 1){
            printf("Invalid input! Please enter a valid integer.\n");
            //Clear input buffer to prevent infinite loop
            while(getchar() != '\n');
            continue;

        }
        attempts++;

        //Hints
        if(guess>secret_num){
            printf("High number! Try a lower number. \n");

        }
        else if(guess<secret_num){
            printf("Low number! Try a higher number. \n");
        }
        else{
            //Correct guess results in completion of game and execution of loop
            printf("\nCongratulations! Correct number was guessed.\n");
            printf("The secret number was %d.\n", secret_num);
            printf("This game took %d attempts to win.\n", attempts);
            break;
        }
    }

    return 0;

}