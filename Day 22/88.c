//Wap in c to remove spaces from string:

#include<stdio.h>
int main(){

    //Variable declaration
    int size,i,j;

    //Get size of string from user
    printf("Enter the size of string:");
    scanf("%d", &size);

    //Clear cursor line
    getchar();

    char str[size+1];

    //Get string from user 
    printf("Enter the string to remove spaces:");
    gets(str);

    //Initialize pointer 
    j=0;
    for(i= 0; str[i]!= '\0'; i++){
        //If character is not space, keep it
        if(str[i]==' ' && str[i] !='\t'){
            str[j]= str[i];
            j++;       //Moving pointer forward
        }
    }

    //Terminate null character 
    str[j]='\0';

    //Final output
    printf("String after removing spaces:%s\n", str);

    return 0;
}

