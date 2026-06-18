//Wap in c to count words in a sentence:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,size;

    //Get size of string from user
    printf("Enter the size of string:");
    scanf("%d", &size);

    //To clear cursor for output 
    getchar();

    char str[size+1];

    //Get string sentence from user
    printf("Enter the sentence to count for words:");
    gets(str);

    int count= 0; 

    //Counting words in the sentence 
    for(i= 0; str[i]!='\0' && str[i]!= '\n'; i++){
        if(str[i]!= ' ' && (str[i+1] == ' ' || str[i+1]=='\n' || str[i+1] == '\0')){
            count++;
        }
    }

    //Final output 
    printf("Total words:%d\n", count);

    return 0;


}