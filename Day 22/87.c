//Wap in c to check character frequency:

#include<stdio.h>
int main(){

    //Variable declaration
    int i,j,size;

    //Get the size of string 
    printf("Enter the size of string:");
    scanf("%d", &size);

    //Clear cursor for output 
    getchar();

    char str[size+1];

    //Get the string from user 
    printf("Enter the string:");
    gets(str);

    //Printing output 
    printf("\nCharacter Frequencies:\n");

    //Using nested loop to count duplicates
    for(i=0; str[i]!='\0'; i++){
        //Initialisation with 0 for current character 
        int count=1;

        //Skip this character if we already counted it earlier
        if(str[i]=='\0'){
            continue;
        }

        //Checking string for duplicates 
        for(j=i+1; str[j]!='\0'; j++){
            if(str[i]== str[j]){
                count++;
                str[j]='\0';             //Mark as visited to skip in outer loop
            }
        }

        //Printing duplicates 
        printf("%c occurs %d times", str[i], count);

    }
    return 0;
}

