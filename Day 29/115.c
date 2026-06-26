//Wap in c to create Menu Driven String Operation System: 

#include<stdio.h>
#include<stdlib.h>
#include<string. h>

#define MAX_SIZE 100

int main(){
    char str1[MAX_SIZE], str2[MAX_SIZE], str3[MAX_SIZE*2];
    int choice;
    int result; 
    int len;
    int c;

    while(1){
        //Display the menu
        printf("\n------------------------------------\n");
        printf("   String Manipulation System         \n");
        printf("--------------------------------------\n");
        printf("1. Find length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Two Strings\n");
        printf("4. Compare Two Strings\n");
        printf("5. Reverse a String\n");
        printf("6. Exit\n");
        printf("--------------------------------------\n");
        printf("Enter the choice(1-6): ");

        if(scanf("%d", &choice) != 1){
            printf("Invalid input. Please enter a number.\n");
            while((c=getchar()) != '\n' && c!= EOF);    //Clear buffer
            continue;
        }
        while((c=getchar()) != '\n' && c!= EOF);        //Clear buffer 
        
        switch (choice) {
            case 1:
                printf("Enter a string: ");
                fgets(str1, MAX_SIZE, stdin);
                str1[strcspn(str1, "\n")] ='\0';       //Remove newline

                printf("Length of the string: %lu\n", strlen(str1));
                break;
            
            case 2:
                printf("Enter a string: ");
                fgets(str1, MAX_SIZE, stdin);
                str1[strcspn(str1, "\n")] = '\0';  

                strcpy(str2,str1);
                printf("String copied successfully!\n");
                printf("Destination string: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, MAX_SIZE, stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string: ");
                fgets(str2, MAX_SIZE, stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcpy(str3, str1);
                strcat(str3, str2);
                printf("Concatenatedc String: %s\n", str3);
                break; 

            case 4:
                printf("Enter first string: ");
                fgets(str1, MAX_SIZE,stdin);
                str1[strcspn(str1, "\n")]='\0';

                printf("Enter second string: ");
                fgets(str2, MAX_SIZE, stdin);
                str2[strcspn(str2, "\n")]='\0';

                result= strcmp(str1, str2);
                if(result==0){
                    printf("Strings are identical.\n");
                }else if(result>0){
                    printf("First string is lexicographically greater.\n");
                }else{
                    printf("Second string is lexicographically greater.\n");
                }
                break; 
            
            case 5:
                printf("Enter a string to reverse: ");
                fgets(str1, MAX_SIZE,stdin);
                str1[strcspn(str1,"\n")]='\0';

                len= strlen(str1);
                printf("Reverse string: ");
                for(int i=len - 1; i>=0; i--){
                    putchar(str1[i]);
                }
                printf("\n");
                break; 

            case 6:
                printf("Exiting the program, Bye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please select an option between 1 and 6.\n");
            
        }
    }

    return 0;
}

