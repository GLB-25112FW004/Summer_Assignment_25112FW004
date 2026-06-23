//Wap in c to create student record management system: 

#include<stdio.h>
#include<string.h>

struct Student {
    int id;
    char name[30];
    char course[20];
    float gpa;
};

int main(){
    struct Student s[100];            //Stores upto 100 students
    int count = 0, choice, searchid, found, index; 

    while(1){
        printf("\n-------------Student Record Management System----------\n");
        printf("1. Add Student\n2. Display All Students\n3. Search Student\n4. Update Student\n5. Delete Student\n6. Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);

        //1.ADD STUDENT
        if(choice==1){
            if(count>=100){
                printf("System is Full!!\n");
                continue;
            }
            printf("Enter ID:");
            scanf("%d", &s[count].id);
            printf("Enter name:");
            scanf("%d", &s[count].name);
            printf("Enter course:");
            scanf("%d", &s[count].course);
            printf("Enter GPA:");
            scanf("%f", &s[count].gpa);
            count++;
            printf("Student added successfully!!\n");
        }

        //2. DISPLAY ALL RECORDS
        else if(choice==2){
            if(count==0){
                printf("No records found.\n");
                continue;
            }
            printf("\n%-5s %-15s %-15s %-5s\n", "ID", "Name", "Course", "GPA");
            printf("-------------------------------------------\n");
            for(int i=0; i<count; i++){
                printf("%-5d %-15s %-15s %-5.2f\n", s[i].id, s[i].name, s[i].course, s[i].gpa);
            }
        }

        //3. SEARCH STUDENT
        else if(choice==3){
            printf("Enter ID to search:");
            scanf("%d", &searchid);
            found=0;
            for(int i=0; i<count; i++){
                if(s[i].id == searchid){
                    printf("\nFound! Name: %s | Course: %s | GPA: %.2f\n", s[i].name, s[i].course, s[i].gpa);
                    found=1;
                    break;
                }
            }
            if(!found){
                printf("Student not found.\n");
            }
        }

            //4. UPDATE STUDENT
            else if(choice == 4){
                printf("Enter ID to update: ");
                scanf("%d", &searchid);
                found=0;
                for(int i=0; i<count; i++){
                    if(s[i].id == searchid){
                        printf("Enter new Name, Course, GPA:")
                        scanf("%s %s %f", s[i].name, s[i].course, &s[i].gpa);
                        printf("Record updated successfully!!\n");
                        found=1;
                        break;
                    }
                }
                if(!found){
                    printf("Student not found.\n");
                }
            }

                //5. DELETE STUDENT
                else if(choice == 5){
                    printf("Enter ID to delete:");
                    scanf("%d", &searchid);
                    found=0;
                    for(int i=0; i<count; i++){
                        if(s[i].id == &searchid){
                            index=i;
                            found=1;
                            break;
                        }
                    }
                    if(found){
                        //Shift elements to left to overwrite the deleted student
                        for(int i = index; i<count-1; i++){
                            s[i] = s[i+1];
                        }
                        count--;
                        printf("Student deleted successfully!!\n");
                    }else{
                        printf("Student not found.\n");
                    }
                }

                //6. EXIT
                else if(choice == 6){
                    printf("Bye!!\n");
                    break;
                }

                else{
                    printf("Invalid choice!! Try once again.\n");
                }
            }
            return 0;
}