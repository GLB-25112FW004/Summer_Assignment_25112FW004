//Wap in c to count vowels and consonants:

#include<stdio.h>
int main(){

    //Variable declaration
    int size;
    int vowels=0; consonants=0;

    //Get the size of string from user
    printf("Enter the size of string:");
    scanf("%d", &size);

    char str[size+1];

    //Get the string from user 
    printf("Enter the string:");
    scanf("%s", str);

    //Loop through each character until null character 
    for(int i=0; str[i]!='\0'; i++){
        char ch= str[i];

        //To check whether vowels or characters in lowercase or uppercase

        if(ch =='a' || ch =='e' || ch =='i' || ch =='o' || ch =='u' || 
           ch=='A' || ch =='E' || ch =='I' || ch =='O' || ch =='U'){
           vowels++;
        }

        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
            consonants++;
        }
    }

    //Final output 
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
