//Wap in c find common characters in strings:

#include<stdio.h>
#include<string.h>
int main(){
    int size;

    //Take input from user
    printf("Enter maximum sentence size:");
    scanf("%d", &size);

    //Clear leftover newline character
    getchar();

    //Create string array
    char str[size+1];

    printf("Enter the sentence:");
    //Safely read the entire line including space 
    fgets(str, sizeof(str), stdin);
    //Free trailing newline character
    str[strcspn(str,"\n")]='\0';

    printf("Repeating characters:");
    int len= strlen(str);

    //Compare each character with rest of sentence
    for(int i=0; i<len; i++){
        //Skip spaces and characters
        if(str[i]==' ' || str[i]=='\0'){
            continue;
        }
        int isduplicate=0;

        for(int j=i+1;j<len; j++){
            if(str[i]== str[j]){
                isduplicate=1;
                //Mark as processed so that it is not printed again
                str[j]='\0';
            }
        }
        //If duplicate was found, print the character
        if(isduplicate){
            printf("%c", str[i]);
        }
    }
    printf("\n");
    return 0;
}