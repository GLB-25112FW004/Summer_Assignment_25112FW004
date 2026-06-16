//Wap in c to find row wise sum of matrix:

#include<stdio.h>
int main(){

    //Variable declaration
    int rows,cols, i,j;

    //Get size of rows and columns from user 
    printf("Enter the number of rows of matrix:");
    scanf("%d", &rows);
    printf("Enter the number of columns of matrix:");
    scanf("%d", &cols);

    int matrix[rows][cols];

    //Get elements of the matrix by the user
    printf("\nEnter the elements for a %dx%d matrix:\n", rows, cols);
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("Element [%d][%d]:", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    //Display original matrix
    printf("\nThe matrix is:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    //Calculate row wise sum
    printf("\nRow wise sum results:\n");
    for(i= 0; i<rows; i++){
        int rowsum=0;              //Set rowsum to 0 for each iteration 
        for(j=0; j<cols; j++){
            rowsum+= matrix[i][j];
        }

        //Final output 
        printf("Sum of %d row is %d.\n", i+1, rowsum);
    }

    return 0;
}