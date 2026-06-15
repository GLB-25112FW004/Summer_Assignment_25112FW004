//Wap in c to find difference of matrices:

#include<stdio.h>
int main(){
    //Variable declaration
    int rows,cols,i,j;

    //Get total number of rows and columns from user
    printf("Enter the number of rows and columns of matrices:");
    scanf("%d %d", &rows, &cols);

    int m1[rows][cols], m2[rows][cols], sub[rows][cols];

    //Get first matrix elements from user
    printf("Enter the matrix A elements:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &m1[i][j]);
        }
    }

    //Get second matrix elements from user
    printf("Enter the matrix B elements:\n");
    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            scanf("%d", &m2[i][j]);
        }
    }

    //Final output 
    printf("\nDifference of Matrices:\n");

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            sub[i][j]= m1[i][j]-m2[i][j];
            printf("%d ", sub[i][j]);
        }
        
        printf("\n");
    }
    return 0;

}