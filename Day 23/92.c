//Wap in c to find maximum occuring character: 

#include<stdio.h>
#include<string.h>

int main(){

    //Variable declaration
    int i,j,count,max_count= 0;
    char max_char;

    //Get the size of string from user
    printf("Enter the size of string:");
    scanf("%d", &size);

    char str[size+1];

    //Get the string from user
    printf("Enter the string:");
    scanf("%s", str);

    //Outer loop is for selecting each character one by one
    for(i=0; str[i] != '\0'; i++){
        count= 0;

        //Inner loop counts frequency of character
        for(j=0; str[j] != '\0'; j++){
            if(str[i]==str[j]){
                count++;
            }
        }

        //Update max if a higher count is found
        if(count>max_count){
            max_count= count;
            max_char= str[i];
        }
    }

    //Final output 
    printf("Maximum occurring character is %c(%d times).\n", max_char,max_count);
    return 0;
}