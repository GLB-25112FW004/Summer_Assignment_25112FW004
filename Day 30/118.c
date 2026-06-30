//Wap in c to Create Mini Library System:

#include<stdio.h>
#include<string.h>

//Struct to store book details
struct Book{
    int id;
    char title[50];
    char author[50];
    int is_issued;
};

int main(){
    struct Book library[100];
    int book_count=0;
    int choice, search_id, found;

    while(1){
        //Main dashboard 
        printf("\n----------LIBRARY MENU---------\n");
        printf("1. Add Book\n2. Display All\n3. Search Book\n4. Return Book\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice==6){
            printf("Exiting System...\n");
            break;
        }

        switch(choice){
            case 1: //Add Book
                if(book_count>= 100){
                    printf("Library is Full!\n");
                    break;
                }
                printf("Enter book id: ");
                scanf("%d", &library[book_count].id);

                printf("Enter book title: ");
                fgets(library[book_count].title, sizeof(library[book_count].title), stdin);
                library[book_count].title[strcspn(library[book_count].title, "\n")]=0;

                printf("Enter book author: ");
                fgets(library[book_count].author, sizeof(library[book_count].author), stdin);
                library[book_count].author[strcspn(library[book_count].author, "\n")]=0;

                library[book_count].is_issued=0;
                book_count++;
                printf("Book added successfully!\n");
                break;

            case 2:
                //Display all books
                if(book_count==0){
                    printf("No books available.\n");
                    break;
                }
                printf("\n%-10s %-30s %-25s %-15s\n","ID","Title","Author","Status");
                for(int i=0; i<book_count; i++){
                    printf("%-10d %-30s %-25s %-15s\n",
                    library[i].id, library[i].title, library[i].author, library[i].is_issued? "Issued":"Available");
                
                }
                break;
            case 3:
            //Search book
                printf("Enter bookid to search: ");
                scanf("%d", &search_id);
                found=0;

                for(int i=0; i<book_count; i++){
                    if(library[i].id==search_id){
                        printf("\nBook Found:\nID:%d\nTitle: %s\nAuthor: %s\n",
                        library[i].id, library[i].title, library[i].author,
                        library[i].is_issued? "Issued": "Available");
                        found=1;
                        break;
                    }
                }
                if(!found){
                    printf("Book with id %d not found.\n", search_id);
                }
                break;
            case 4:
                //Return Book
                printf("Enter book id to return:");
                scanf("%d",&search_id);
                found=0;

                for(int i=0; i<book_count; i++){
                    if(library[i].id==search_id){
                        found=1;
                        if(library[i].is_issued==0){
                            printf("This book was not issued, it is already in the library.\n");

                        }else{
                            library[i].is_issued=0;
                            printf("Book '%s' has been successfully returned!\n", library [i].title);
                        }
                        break;
                    }
                }
                if(!found){
                    printf("Book id %d not found.\n",search_id);
                }
                break;

            default:
                printf("Invalid choice, please enter a valid number.\n");
            
    

        }
        
    }
    return 0;
}