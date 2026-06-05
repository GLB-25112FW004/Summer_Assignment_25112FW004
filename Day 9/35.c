//Wap in c to print Repeated Character Pattern:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,j,rows;

    //Input by the user
    printf("Enter the number of rows of the pattern:");
    scanf("%d", &rows);

    //Outer loop for total number of rows
    for(i=0; i<rows; i++){
        //Inner loop for printing Alphabets according to row number
        for(j=0; j<=i; j++){
            printf("%c", 'A' + i);
        }
        //Moves to the new line
        printf("\n");
    }
    return 0;
}