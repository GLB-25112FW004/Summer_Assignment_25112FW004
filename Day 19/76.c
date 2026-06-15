//Wap in c to find Diagonal sum of matrix:

#include<stdio.h>
int main(){

    //Variable declaration
    int size,i,j;
    int primary_sum=0, secondary_sum=0;

    //Get size of matrix by the user
    printf("Enter the size of square Matrix:");
    scanf("%d", &size);

    int matrix[size][size];

    //Get the elements of matrix by the user
    printf("Enter the elements of the square matrix:\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    //Finding diagonals of square matrix 
    for(i=0; i<size; i++){

        //Primary matrix for same row index and column index
        primary_sum+=matrix[i][i];

        //Secondary matrix here column index decreases as row index increases
        secondary_sum+= matrix[i][n-i-1];
    }

    //Final output 
    printf("Sum of primary diagonal=%d\n", primary_sum);
    printf("Sum of secondary diagonal=%d\n", secondary_sum);

    return 0;
}