//Wap in c to find Transpose of Matrix: 

#include<stdio.h>
int main(){

    //Variable declaration
    int rows,cols,i,j;

    //Get number of rows and columns from user
    printf("Enter the number of rows and columns of matrices:");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int transpose[cols][rows];

    //Get the elements of matrix from user
    printf("\nEnter elements of the matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Enter element at[%d][%d]:", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }

    //Print the original matrix
    printf("\nOriginal matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d\t", matrix[i][j])
        }
        printf("\n");
    }

    //Finding the transpose by swapping elements of matrix
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            transpose[j][i]= matrix[i][j];
        }
    }

    //Print the Transpose matrix
    printf("\nTranpose of the Matrix:\n");
    for(i=0; i<cols; i++){
        for(j=0; j<rows; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");

    }
    return 0;


}