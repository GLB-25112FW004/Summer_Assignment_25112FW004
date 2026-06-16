//Wap in c to check Symmetric matrix:

#include<stdio.h>
int main(){

    //Variable declaration
    int size,i,j;
    int issymmetric=1;

    //Get dimension of the square matrix
    printf("Enter the size of the square matrix:");
    scanf("%d", &size);

    int matrix[size][size];

    //Get elements of the square matrix
    printf("\nEnter the elements of the matrix:\n");
    for(i=0; i<size; i++){
        for(j=0; j<size; j++){
            printf("Element[%d][%d]:", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    //Checks for symmetric matrix
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            if(matrix[i][j]!= matrix[j][i]){
                issymmetric= 0;
                break;
            }
        }
        if(!issymmetric){
            break;
        }
    }

    //Final output 
    if(issymmetric){
        printf("\nThe given matrix is a Symmetric matrix.\n");
    }else{
        printf("\nThe given matrix is not a Symmtric matrix.\n");
    }
    
    return 0;
}