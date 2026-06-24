//Wap in c to create Library Management System:

#include<stdio.h>
#include<string.h>

#define MAX_BOOKS 50

struct Book {
    int id;
    char title[50];
    char author[50];
    int is_issued;
};

struct Book library[MAX_BOOKS];
int book_count = 0;

void addBook(){
    if(book_count >= MAX_BOOKS){
        printf("\nLibrary is Full!\n");
        return;
    }
    struct Book b;
    printf("Enter Book ID(integer):");
    scanf("%d", &b.id);
    getchar();    //Clear buffer 

    printf("Enter Title of book:");
    fgets(b.title, 50, stdin);
    b.title[strcspn(b.title, "\n")] = '\0';

    printf("Enter the Author of book:");
    fgets(b.author, 50, stdin);
    b.author[strcspn(b.author, "\n")] = '\0';

    b.is_issued=0;
    library[book_count++] = b;
    printf("Book added successfully!!\n");
}

void displayBooks(){
    if(book_count==0){
        printf("\nNo books in the library.\n");
        return;
    }
    printf("\n%-10s %-25s %-25s %-10s\n", "ID", "Title", "Author", "Status");
    printf("------------------------------------------------------------\n");
    for(int i=0; i<book_count; i++){
        printf("%-10d %-25s %-25s %-10s\n",
            library [i].id, library[i].title, library[i].author, 
            library[i].is_issued ? "Issued" : "Available");
    }
}

void manageBook(int action){
    //1. Search , 2.Issue, 3. Return
    int target_id, found = 0;
    printf("Enter Book ID:");
    scanf("%d", &target_id);

    for(int i=0; i<book_count; i++){
        if(library[i].id == target_id){
            found=1;
            if(action==1){
                printf("\nFound: %s by %s [%s]\n", library[i].title, library[i].author,
                library[i].is_issued ? "Issued" : "Available");
            }else if(action==2){
                if(library[i].is_issued){
                    printf("Book is already issued!\n");
                }
                else{
                    library[i].is_issued=1;
                    printf("Book issued successfully!\n");
                }
            }
            else if(action==3){
                if(!library[i].is_issued){
                    printf("Book was not issued!\n");
                }
            }
            break;
        }
    }
    if(!found){
        printf("Book ID not found.\n");
    }

}

int main(){
    int choice;
    while(1){
        printf("\n-------------Library Main Menu----------\n");
        printf("1.Add Book\n2. Display All\n3. Search Book\n4. Issue Book\n5. Return Book\n 6. Exit\n");
        printf("Enter the choice:");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: displayBooks(); break;
            case 3. manageBook(1); break; 
            case 4. manageBook(2); break; 
            case 5. manageBook(3); break; 
            case 6. return 0;
            default: printf("Invalid Choice!! Try again.\n");
        }

    }
}


