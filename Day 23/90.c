//Wap in c to find first repeaing character: 

#include<stdio.h>
int main(){

    //Variable declaration
    int size;
    int i,j;

    //Get the size of string from user
    printf("Enter the maximum size of string:");
    scanf("%d", &size);

    //Clear input buffer
    while(getchar() !='\n');

    char str[size+1];

    //Get the string from user
    printf("Enter the string:");
    scanf("%[^\n]", str);

    //Loop through each character
    for(i=0; str[i] !='\0'; i++){

        //Check the rest of string after the current character
        for(j=i+1; str[j] !='\0'; j++){

            //If a match is found, the first repeating character
            if(str[i]==str[j]){
                printf("First repeating character is:%c\n", str[i]);
                return 0;
            }
        }
    }
    
    printf("No repeating character found.\n");
    return 0;
}