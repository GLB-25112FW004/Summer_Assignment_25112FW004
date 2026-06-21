//Wap in c to sort names alphabetically: 

#include<stdio.h>
#include<string.h>
int main(){
    int n,length;

    //Take input from user
    printf("How many names the user wants to sort?");
    scanf("%d", &n);

    printf("What is the maximum length of a name?");
    scanf("%d", &length);

    //Clear leftover newline 
    getchar();

    //Create array and a temp array using user's dimensions
    char names[n][length+1];
    char temp[length+1];

    printf("Enter %d names:\n", n);
    for(int i=0; i<n; i++){
        printf("Name: %d:", i+1);
        fgets(names[i],sizeof(names[i]), stdin);
        //Remove trailing newline character 
        names[i][strcspn(names[i],"\n")]='\0';
    }

    //Bubble sort logic
    for(int i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(strcmp(names[j],names[j+1])>0){
                strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1], temp);
            }
        }
    }

    //Final output
    printf("\nSorted names:\n");
    for(int i=0; i<n; i++){
        printf("%s\n", names[i]);
    }
    return 0;
}