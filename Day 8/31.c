//Wap in c to print Character Triangle :

#include<stdio.h>
int main(){

    //Variable declaration
    int i,j,rows;

    //Input by the user
    printf("Enter the number of rows of the pattern:");
    scanf("%d",&rows);

    //Outer loop for total number of rows
    for(i=1; i<=rows; i++){
        //Set Starting character of each new row to 'A'
        char ch= 'A';

        //Inner loop for printing characters from 'A' upto row number
        for(j=1; j<= i; j++){
            printf("%c", ch);
            ch++;
        }
        //Move to the next line
        printf("\n");
    }
    return 0;
}