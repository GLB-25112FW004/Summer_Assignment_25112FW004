//Wap in c to reverse a string:

#include<stdio.h>
int main(){

    //Variable declaration
    int size;
    int len=0;

    //Get size of string from user
    printf("Enter the size of string:");
    scanf("%d", &size);

    char str[size+1];                   //Allocate space with +1 for null character 

    //Get string from user
    printf("Enter the string to reverse:");
    scanf("%s", str);

    //Calclate Total length of string
    while(str[len]!='\0'){
        len++;
    }

    //Final output 
    printf("Reversed string:");
    for(int i=len-1; i>=0; i--){
        printf("%c", str[i]);
    }
    printf("\n");

    return 0;
}