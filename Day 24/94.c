//Wap in c to compress a string:

#include<stdio.h>
#include<string.h>
int main(){

    //Variable declaration 
    int size,i,j;

    //Get size of string from user
    printf("Enter the maximum string size:");
    scanf("%d", &size);

    //Clear input buffer
    getchar();

    char src[size+1];
    char dest[(size*2)+1];

    //Get the strings from user
    printf("Enter string to compress:");
    fgets(src,size+1,stdin);
    src[strcspn(src,"\n")]='\0';

    int len=strlen(src);
    j=0;                          //Index pointer for the compressed destination string 

    //Compression loop
    for(i=0; i<len; i++){
        //Save the current unique character
        dest[j++]=src[i];

        //Count how many times it repeats consecutively 
        int count=1;
        while(i+1<len && src[i]==src[i+1]){
            count++;
            i++;
        }
        //Convert and append the count to string
        j+=sprintf(&dest[j], "%d", count);
    }

    //Append null terminator to close the string
    dest[j]='\0';

    //Final output
    printf("Compressed string: %s\n", dest);

    return 0;
}