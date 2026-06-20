//Wap in c to find longest word: 

#include<stdio.h>
int main(){
    //Variable declaration
    int size, i;

    //Get size of string from user
    printf("Enter size of maximum sentence:");
    scanf("%d", &size);

    getchar();

    //Create dynamic array
    char str[size+1];

    //Get the sentence from user
    printf("Enter the sentence to find the longest word:");
    fgets(str, sizeof(str), stdin);

    //Handling spaces in the input sentence
    str[strcspn(str,"\n")]='\0';

    //Variable initialisation
    int max_len=0;
    int max_start=0;
    int current_len=0;
    int current_start=0;

    //Loop through the string untill null terminator
    for(i=0; str[i] != '\0'; i++){
        if(str[i] != ' '){
            if(current_len==0){
                current_start=i;
            }
            current_len++;
        }
        else{
            if(current_len>max_len){
                max_len= current_len;
                max_start= current_start;
            }
            current_len=0;
        }
    }

    //Check the last word if the string does not end with space
    if(current_len>max_len){
        max_len= current_len;
        max_start= current_start;
    }

    //Final output 
    printf("Longest word:");
    for(i=max_start; i<max_start+max_len; i++){
        printf("%c", str[i]);
    }
    
    printf("\n");

    return 0;
}