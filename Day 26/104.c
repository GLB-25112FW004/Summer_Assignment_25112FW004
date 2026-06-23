//Wap in c to Create Quiz Application:

#include<stdio.h>

int main(){
    int score=0; ans;

    printf("--------------Computer Programming Quiz-------------\n");

    //Questions
    printf("1.Who developed the C programming language?\n");
    printf("1. Dennis Ritchie\n2. James Gosling\n3.Guido Van Rossum\n");
    printf("Enter your answer:");
    scanf("%d", &ans);
    if(ans==1){
        score++;
    }

    printf("\n2. Which data type is used to store decimal numbers in C?\n");
    printf("1. int\n2. char\n3. float\n");
    printf("Enter your answer:");
    scanf("%d", &ans);
    if(ans==3){
        score++;
    }

    printf("\n3. What is the output of 5 + 3 * 2?\n");
    printf("1. 16\n2. 11\n3. 13\n");
    printf("Enter your answer:");
    scanf("%d", &ans);
    if(ans==2){
        score++;
    }

    printf("\n4. Which function is used to display output in C?\n");
    printf("1. scanf()\n2. display()\n3. printf()\n");
    printf("Enter your answer:");
    scanf("%d", &ans);
    if(ans==3){
        score++;
    }

    printf("\n5.What is the correct extension of a C source file?\n");
    printf("1. .cpp\n2. .java\n3. .c\n");
    printf("Enter your answer:");
    scanf("%d", &ans);
    if(ans==3){
        score++;
    }

    //Result 
    printf("\n-----------------Quiz Result--------------\n");
    printf("Your score in the quiz is %d/5\n", score);

    if(score==5){
        printf("Outstanding!! You are a C programming master.\n");
    }
    else if(score>=3){
        printf("Very good!!\n");
    }
    else{
        printf("Keep practicing!!\n");
    }

    return 0;
}
