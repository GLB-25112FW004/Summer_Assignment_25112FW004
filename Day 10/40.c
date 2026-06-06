//Wap in c to print Character Pyramid Pattern:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,j,rows;

    //Input by the user
    printf("Enter the number of rows of the pattern:");
    scanf("%d", &rows);

    //Outer loop for total number of rows 
    for(i=1; i<=rows; i++){
        //Inner loop
        //Printing leading spaces 
        for(j=1; j<=rows-i; j++){
            printf(" ");
        }
        //Printing Characters in Ascnding order
        for(j=1; j<=i; j++){
            printf("%c", 'A'+ j-1);
        }
        //Printing Characters in Descending order
        for(j=i-1;j>=1; j--){
            printf("%c",'A'+ j-1);
        }
        //Moves to the new line
        printf("\n");
    }
    return 0;
}