//Wap in c to find first non-repeating character:

#include<stdio.h>
int main(){

    //Variable declaration
    int size;
    int i,j, isrepeating;

    //Get the size of string from user
    printf("Enter the maximum size of string:");
    scanf("%d", &size);

    //Clear input buffer
    while(getchar() !='\n');

    char str[size+1];

    //Get the string from user
    printf("Enter the string:");
    scanf("%[^\n]",str);

    //Checking each character
    for(i= 0; str[i]!='\0'; i++){
        isrepeating= 0;

        for(j= 0; str[j]!='\0'; j++){
            if(i!= j && str[i]== str[j]){
                isrepeating= 1;
                break;
            }
        }

        //Final output 
        if(isrepeating==0){
            printf("First non repeating character is:%c\n", str[i]);
            return 0;
        }
    }
    
    printf("No unique character found.\n");
    return 0;

}