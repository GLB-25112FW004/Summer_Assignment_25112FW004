//Wap in c to print number triangle:

#include<stdio.h>
int main(){

    //Variable declaration
    int i,j,rows;

    //Input by the user
    printf("Enter the number of Rows in the pattern:");
    scanf("%d", &rows);

    //Outer loop for total number of rows
    for(i=1; i<=rows ;i++){
        //Inner loop for printing numbers from 1 to current row number
        for(j=1; j<=i; j++){
            printf("%d",j);
        }

        //Moves to the next line
        printf("\n");
    }
    return 0;
}