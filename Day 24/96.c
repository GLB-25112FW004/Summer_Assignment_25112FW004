//Wap in c to remove duplicate characters: 

#include<stdio.h>
#include<string.h>

int main(){

    //Variale declaration 
    int size, i,j,k;
    int length:

    //Get the size of string from user
    printf("Enter the maximum size of string:");
    scanf("%d", &size);

    //Clear buffer line
    while(getchar() != '\n');

    //Create dynamic array
    char str[size+1];

    //Get the string from user
    printf("Enter the string:");

    //Safely handles sentence with spaces in it
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")]='\0';

    length= strlen(str);

    //Loop for checking duplicates character by character
    for(i=0; i<length; i++){
        for(j=i+1; j<length){
            if(str[j]==str[i]){
                //Shift all characters to left to delete the duplicate
                for(k=j; k<length; k++){
                    str[k]= str[k+1];
                }
                length--;                   //Reduce length as string is now shorter
            }else{
                j++;                       //Move to next character only if duplicate was found
            }
        }
    }

    //Final output 
    printf("Result:%s\n", str);

    return 0;

}