//Wap in c to print Star Pyramid Pattern:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,j,k,rows;

    //Input by the user
    printf("Enter the number of rows of the pattern:");
    scanf("%d", &rows);

    //Outer loop for total number of rows
    for(i=1; i<=rows; i++){
        //Inner loop
        //Prints leading spaces of the pattern
        for(j=1; j<=rows-i; j++){
            printf(" ");
        }
        //Prints stars of the pattern
        for(k=1; k<=(2*i-1); k++){
            printf("*");
        }
        //Moves to the next line
        printf("\n");
    }
    return 0;
}