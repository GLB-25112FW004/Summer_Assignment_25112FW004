//Wap in c to convert lowercase to uppercase:

#include<stdio.h>
int main(){

    //Variable declaration
    int size;

    //Get the size of string from user
    printf("Enter the size of string:");
    scanf("%d", &size);

    char str[size+1];

    //Get the string from user
    printf("Enter the string to convert to Uppercase:");
    scanf("%s", str);
    
    //Check if given string is in lowercase
    //Convert using ASCII math
    for(int i= 0; str[i] != '\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            //Convert to Uppercase
            str[i]= str[i]-32;
        }
    }

    //Final output
    printf("Uppercase string:%s\n", str);
}