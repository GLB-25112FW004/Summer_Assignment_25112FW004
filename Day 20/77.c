//Wap in c to Multiply Matrices:

#include<stdio.h>
int main(){

    //Variable declaration 
    int r1,c1,r2,c2,i,j;

    //Get dimensions for both the matrices
    printf("Enter rows and columns for first matrix:");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns for second matrix:");
    scanf("%d %d", &r2, &c2);

    //Check if multiplication possible 
    if(c1!=r2){
        printf("\nError: Multiplication not possible!\n");
        printf("Columns of first matrix must equal rows of second matrix.\n");
        return 1;
    }

    int mat1[r1][c1];
    int mat2[r2][c2];
    int result[r1][c2];

    //Get elements of the first matrix by the user
    printf("\nEnter elements of first matrix:\n");
    for(i=0; i<r1; i++){
        for(j=0; j<c1; j++){
            scanf("%d", &mat1[i][j]);
        }
    }

    //Get elements of the second matrix by the user
    printf("\nEnter elements of second matrix:\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++){
            scanf("%d", &mat2[i][j]);
        }
    }

    //Multiply matrices
    for(i=0; i<r1; i++){
        for(j=0; j<c2; j++){
            result[i][j]= 0;               //Initialize result matrix to 0
            for(int k=0; k<c1; k++){
                result[i][j]+= mat1[i][k]*mat2[k][j];
            }

        }
    }

    //Final output
    printf("\nResultant Matrix(%dx%d):\n", r1,c2);
    for(i= 0; i<r1; i++){
        for(j= 0; j<c2; j++){
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;

}