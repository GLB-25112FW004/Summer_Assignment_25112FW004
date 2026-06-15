//Wap in c to find Addition of Matrices:

#include<stdio.h>
int main(){

    //Variable declaration
    int rows,cols,i,j;

    //Get total number of rows and columns from user
    printf("Enter the number of rows and columns of matrices:");
    scanf("%d %d", &rows, &cols);

    int m1[rows][cols], m2[rows][cols], sum[rows][cols]; 

    //Get first matrix elements from user
    printf("Enter the elements in first Matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    //Get second matrix elements from user
    printf("Enter the elements in second matrix:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    //Final output, Addition of matrices
    printf("\nSum of matrices:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            sum[i][j]= m1[i][j]+ m2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}