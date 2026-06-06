//Wap in c to print Number Pyramid Pattern:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,j,rows;

    //Input by the user
    printf("Enter the number of rows of the pattern:");
    scanf("%d", &rows);

    //Outer loop for total number of rows
    for(i=1; i<=rows; i++){
        
        //Inner loops
        //For printing leading spaces
        for(j=1; j<=rows-i; j++){
            printf(" ");
        }
        //Printing numbers in Ascending order
        for(j=1; j<=i; j++){
            printf("%d", j);
        }
        //Printing numbers in Descending order
        for(j=i-1; j>=1; j--){
            printf("%d", j);
        }
        //Moves to the next line
        printf("\n");
    }
    return 0;
}