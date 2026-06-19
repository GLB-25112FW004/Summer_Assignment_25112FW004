//Wap in c to check Anagram string:

#include<stdio.h>
#include<string.h>

int main(){

    //Variable declaration 
    int size, i,j, found; 

    //Get the size of string from user
    printf("Enter the size of string:");
    scanf("%d", &size);

    char str1[size+1];
    char str2[size+1];

    //Get the words from user to check
    printf("Enter first word:");
    scanf("%s", str1);

    printf("Enter second word:");
    scanf("%s", str2);

    //If length of words are not same, words are not Anagram 
    if(strlen(str1) != strlen(str2)){
        printf("Strings are Not Anagrams.\n");
        return 0;
    }

    //Checking strings
    for(i=0; str1[i] != '\0'; i++){
        found= 0;
        for(j= 0; str2[j]!='\0'; j++){
            if(str1[i]==str2[j]){
                found=1;
                str2[j]='*';                //Marking words 
                break;
            }
        }
        if(found==0){
            printf("Strings are Not Anagrams.\n");
            return 0;
        }
    }

    printf("Given strings are Anagrams.\n");
    return 0;

}
