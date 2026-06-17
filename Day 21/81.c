//Wap in c to find string length without using strlen():

#include<stdio.h>
int main(){

    //Variable declaration
    int size;
    int length=0;

    //Get size of string from user
    printf("Enter the size of string:");
    scanf("%d", &size);

    char str[size];

    //Get the string from user
    printf("Enter the string:");
    scanf("%s", str);                     

    //Count characters 
    while(str[length]!='\0'){             //Compare with null character 
        length++;
    }

    //Final outut 
    printf("Length of the given string is %d\n", length);

    return 0;
}