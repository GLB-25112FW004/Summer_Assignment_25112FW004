//Wap in c to print Hollow Square Pattern:

#include<stdio.h>
int main(){

    //Variable declaration 
    int i,j,rows;

    //Input by the user
    printf("Enter the number of rows in the pattern:");
    scanf("%d", &rows);

    //Outer loop for total number of rows
    for(i=1; i<=rows; i++){
        //Inner loop for printing * on the boundaries
        for(j=1; j<=rows; j++){
            if(i==1 || i==rows || j==1 || j==rows){
                printf("* ");
            }
            //Handling space to match the pattern
            else{
                printf("  ");
            }
        }
        //Moves to the new line
        printf("\n");
    }
    return 0;

}