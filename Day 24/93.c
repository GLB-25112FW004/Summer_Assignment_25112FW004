//Wap in c to check String Rotation:

#include<stdio.h>
#include<string.h>
int main(){
    //Variable declaration 
    int size;

    //Get the maximum size of string from user
    printf("Enter the maximum size of string:");
    scanf("%d", &size);

    //Clear input buffer
    getchar();

    //Create dynamic array 
    char str1[size+1];
    char str2[size+1];
    char temp[(size*2)+1];

    //Get the strings from user, along with safely handling spaces with it
    printf("Enter the first string:");
    fgets(str1, size+1, stdin);
    str1[strcspn(str1, "\n")]='\0';

    printf("Enter the second string:");
    fgets(str2, size+1, stdin);
    str2[strcspn(str2, "\n")]= '\0';

    //Checking lengths of both the strings
    if(strlen(str1) != strlen(str2)){
        printf("No, the given strings are not Rotations as lengths do not match.\n");
        return 0;
    }

    //Using string inbuilt functions
    strcpy(temp,str1);
    strcat(temp,str1);

    //Final output
    if(strstr(temp,str2) != NULL){
        printf("Yes, The given strings are rotations.\n");
    }
    else{
        printf("No, the given strings are not rotations.\n");
    }

    return 0;

}