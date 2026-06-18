//Wap in c to check palindrome string:

#include<stdio.h>
#include<string.h>

int main(){

    //Variable declaration 
    int size,i;

    //Get size of string from user
    printf("Enter the size of string:");
    scanf("%d", &size);

    char str[size+1];

    //Get string from user
    printf("Enter the string:");
    scanf("%s", str);

    //Using string inbuilt function 
    int len= strlen(str);

    int ispalindrome=1;

    //Check characters from both ends
    for(i=0; i<len/2; i++){
        if(str[i]!=str[len-i-1]){
            ispalindrome=0;                   //Not a palindrome 
            break;
        }
    }

    //Final output
    if(ispalindrome==1){
        printf("The given string is a palindrome.\n");
    }
    else{
        printf("The given string is not a Palindrome.\n");
    }
    return 0;
}