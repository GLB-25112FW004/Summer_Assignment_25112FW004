//Wap in c to create Student Record System using arrays and strings: 

#include<stdio.h>
#include<string.h>

#define MAX_STUDENTS 100
#define NAME_LENGTH 50

//Structure to store student data
struct Student {
    int rollno;
    char name[NAME_LENGTH];
    float marks;
};

int main(){
    struct Student database[MAX_STUDENTS];
    int studentcount=0;    //Tracks the number of student
    int choice;

    do{
        printf("\n-------------Student Record System------------\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student by Roll number\n");
        printf("4. Exit\n");
        printf("Enter your choice: (1-4)");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
            //Add Student Record
                if(studentcount>= MAX_STUDENTS){
                    printf("Database is full! Cannot add more students.\n");
                }else{
                    printf("\nEnter Roll number: ");
                    scanf("%d", &database[studentcount].rollno);

                    //Clear the input buffer
                    getchar();

                    printf("Enter Student name: ");
                    fgets(database[studentcount].name, NAME_LENGTH, stdin);

                    //Remove Trailing newline character 
                    database[studentcount].name[strcspn(database[studentcount].name, "\n")] = '\0';

                    printf("Enter Marks: ");
                    scanf("%f", &database[studentcount].marks);

                    studentcount++;     //Increment counter
                    printf("Record added successfully!\n");
                }
                break;

            case 2:
            //Display All Records
                if(studentcount==0){
                    printf("\nNo Records found.\n");
                }else{
                    printf("\n%-10s %-30s %-10s\n", "Roll No", "Name", "Marks");
                    for(int i=0; i<studentcount; i++){
                        printf("%-10d %-30s %-10.2f\n",
                        database[i].rollno, database[i].name, database[i].marks);
                    
                    }
                }
                break;


            case 3:
            //Search Student by Roll number
                if(studentcount==0){
                    printf("\nNo records to search!\n");
                }else{
                    int searchroll;
                    int found=0;
                    printf("\nEnter Roll Number to search: ");
                    scanf("%d", &searchroll);

                    for(int i=0; i<studentcount; i++){
                        if(database[i].rollno==searchroll){
                            printf("\nRecord Found!\n");
                            printf("Roll Number: %d\n", database[i].rollno);
                            printf("Name:   %s\n", database[i].name);
                            printf("Marks:  %.2f\n", database[i].marks);
                            found=1;
                            break;       //Stop searching
                        }
                    }

                    if(found==0){
                        printf("Student with roll number %d not found.\n", searchroll);
                    }
                }
                break;

            case 4: 
            //Exit
                printf("Exiting System, Bye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }while(choice!=4);

    return 0;
}