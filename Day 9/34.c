//Wap in c to print Reverse number triangle:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,j,rows;

    //Input by the user
    printf("Enter the number of rows of the pattern:");
    scanf("%d", &rows);

    //Outer loop for total number of rows
    for(i=rows; i>=1; i--){
        //Inner loop for printing numbers according to row number
        for(j=1; j<=i; j++){
            printf("%d", j);
        }

        //Moves to the next line
        printf("\n");
    }
    return 0;
}