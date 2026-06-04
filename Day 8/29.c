//Wap in c to print Half Pyramid Pattern:

#include<stdio.h>
int main(){

    //Variable declaration
    int i,j,rows;

    //Input by the user
    printf("Enter the number of Rows of the Pattern:");
    scanf("%d", &rows);

    //Outer loop for total number of rows
    for(i=1;i<=rows;i++){
        //Inner loop for number of stars in each row
        for(j=1;j<=i;j++){

            printf("* ");
        }

        //Move to the next line
        printf("\n");
    }
    return 0;
}

