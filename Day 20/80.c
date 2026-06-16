//Wap in c to find Column wise sum of matrix:

#include<stdio.h>
int main(){

    //Variable declaration 
    int rows,cols, i,j;

    //Get number of rows and columns of matrix from user
    printf("Enter the number of rows in matrix:");
    scanf("%d", &rows);
    printf("Enter the number of columns in matrix:");
    scanf("%d", &cols);

    int matrix[rows][cols];

    //Get elements into the matrix from user
    printf("\nEnter the elements in the matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Element [%d][%d]:", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    //Display original matrix
    printf("\nThe matrix is:\n");
    for(i= 0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    //Calculate column wise sum of matrix
    printf("\nColumn wise sum:\n");

    //Outer loop iterates over each column
    for(j=0; j<cols; j++){
        int colsum=0;

        //Inner loop travels the rows of current column
        for(i=0; i<rows; i++){
            colsum+=matrix[i][j];
        }

        //Final output 
        printf("Sum of column%d=%d\n", j+1, colsum);
    }
    return 0;
}
