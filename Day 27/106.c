//Wap in c Create Employee Management System:

#include<stdio.h>

#define MAX 50
struct Employee {
    int id;
    char name[40], dept[30];
    float salary;
} emp[MAX];
int count = 0;

void add(){
    if(count>=MAX){
        printf("\nDatabase Full!!\n");
        return ;
    }
    int newId;
    printf("\nEnter ID: ");
    scanf("%d", &newId);
    for(int i= 0; i<count; i++){
        if(emp[i].id == newId){
            printf("Error..ID already exists!\n");
            return ;
        }
    }
    emp[count].id= newId;
    printf("Enter name, department, Salary:");
    scanf(" %[^\n] %s %f",emp[count].name, emp[count].dept, &emp[count].salary);
    count++;
    printf("Success: Record saved.\n")
}

void view(){
    if(count == 0){
        printf("\nNo records found.\n");
        return ;
    }
    printf("\n%-5s %-20s %-15s %-10s\n---------------------\n", "ID", "Name", "Department", "Salary");
    for(int i = 0; i<count; i++){
        printf("%-5d %-20s %-15s Rs. %-10.2f\n", emp[i].id, emp[i].name, emp[i].dept, emp[i].salary);
    }
}

void search(){
    int id;
    printf("\nEnter search ID:");
    scanf("%d", &id);
    for(int i=0; i<count; i++){
        if(emp[i].id == id){
            printf("\nFound: ID %d | %s | %s | Rs. %.2f\n", emp[i].id, emp[i].name, emp[i].dept, emp[i].salary);
            return ;
        }
    }
    print("Record not found./n");
}

void update(){
    int id; 
    printf("\n Enter Update ID:");
    scanf("%d", &id);
    for(int i=0; i<count; i++){
        if(emp[i].id == id){
            printf("Enter New name, department, salary:");
            scanf(" %[^\n] %s %f", emp[i].name, emp[i].dept, &emp[i].salary);
            printf("Success: Profile updated.\n");
            return ;
        }
    }
    printf("Record not found.\n");
}

void del(){
    int id;
    printf("\nEnter Delete ID:");
    scanf("%d", &id);
    for(int i=0; i<count; i++){
        if(emp[i].id == id){
            for(int j = i; j<count - 1; j++){
                emp[j]=emp[j+1];
                count--;
                printf("Success: Record deleted.\n");
                return ;
            }
        }
    }
    printf("Record not found.\n");
}

int main(){
    int choice;
    while(1){
        printf("\n1. Add 2.View 3.Search 4.Update 5. Delete 6,Exit \nEnter Option: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: add(); break;
            case 2: view(); break;
            case 3: search(); break;
            case 4: update(); break;
            case 5: del(); break;
            case 6: return 0;
            default: printf("Invalid option. Try again.\n");

        }
    }
}

