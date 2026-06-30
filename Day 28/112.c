//Wap in c to create Contact management system:

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Contact{
    char name[50];
    char phone[20];
    char email[50];
};

void addContact(){
    struct Contact c;
    FILE *f = fopen("contacts.txt", "a");

    printf("Enter First name(no spaces): ");
    scanf("%s", c.name);
    printf("Enter Phone Number :");
    scanf("%s", c.phone);
    printf("Enter Email: ");
    scanf("%s", c.email);

    fprintf(f, "%s %s %s\n", c.name, c.phone, c.email);
    fclose(f);
    printf("Saved successfully!\n");

}

void listContacts(){
    struct Contact c;
    FILE *f= fopen("contacts. txt", "r");
    if(f==NULL){
        printf("No contacts saved yet.\n");
        return;
    }
    printf("\n---------Contacts List-------------\n");
    while(fscanf(f,"%s %s %s", c.name, c.phone, c.email)!= EOF){
        printf("Name: %s | Phone: %s | Email: %s\n", c.name, c.phone, c.email);
    }
    fclose(f);
}

void searchContact(){
    struct Contact c;
    char searchName[50];
    int found=0;

    FILE *f= fopen("contacts.txt", "r");
    if(f==NULL){
        printf("No contacts saved yet!\n");
        return;
    }

    printf("Enter name to search: ");
    scanf("%s", searchName);

    while(fscanf(f,"%s %s %s", c.name,c.phone, c.email)!= EOF){
        if(strcmp(c.name,searchName)==0){
            printf("\nContact Found!\n");
            printf("Name: %s\nPhone: %s\nEmail : %s\n", c.name,c.phone,c.email);
            found=1;
            break;
        }
    }
    fclose(f);
    if(!found){
        printf("Contact not found.\n");
    }

}

void deleteContact(){
    struct Contact c;
    char deleteName[50];
    int found=0;

    FILE *f= fopen("contacts.txt", "r");
    FILE *t = fopen("temp.txt", "w");

    if(f==NULL){
        printf("No contacts saved yet!\n");
        if(t){
            fclose(t);
        }
        return;
    }

    printf("Enter name to delete: ");
    scanf("%s", deleteName);

    //Read from original, write everything else to temp
    while(fscanf(f,"%s %s %s", c.name, c.phone, c.email)!=EOF){
        if(strcmp(c.name, deleteName)==0){
            found=1;       //Mark that we found and skipped it
        }else{
            fprintf(t,"%s %s %s\n", c.name, c.phone, c.email);
        }
    }
    fclose(f);
    fclose(t);

    //Replace old file with the updated temp file
    remove("contacts.txt");
    rename("temp.txt","contacts.txt");

    if (found){
        printf("Contact deleted successfully!\n");
    }else{
        printf("Contact not found.\n");
    }
}

int main(){
    int choice;
    while(1){
        printf("\n1. Add Contact\n2. List Contacts\n3. Search Contact\n4. Delete Contact\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        if(choice==1){
            addContact();
        }else if(choice==2){
            listContacts();
        }else if(choice==3){
            searchContact();
        }else if(choice==4){
            deleteContact();
        }else if(choice==5){
            break;
        }else{
            printf("Invalid choice!\n");
        }
    }
    return 0;
}