//Wap in c to sort words by length: 

#include<stdio.h>
#include<string.h>
int main(){
    int n;

    //Get exact number of words from user
    printf("Enter the number of words:");
    scanf("%d", &n);

    //Declare arrays based on user size
    char words[n][50];
    char temp[50];

    //Get the words from user
    printf("Enter the %d words:\n", n);
    for(int i=0; i<n; i++){
        scanf("%s", words[i]);
    }
    //Sort words by length
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(strlen(words[j])>strlen(words[j+1])){
                //Swap words 
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }
    //Final output
    printf("\nSorted words:\n");
    for(int i=0; i<n; i++){
        printf("%s\n", words[i]);
    }
    return 0;
}
