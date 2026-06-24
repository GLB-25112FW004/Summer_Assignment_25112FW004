//Wap in c to create Salary Management System: 

#include<stdio.h>
#include<string.h>

//Struct keeps all employee data organised in one place
struct Employee{
    int id;
    char name;
    float basic;
    float hra;
    float pf;
    float gross;
    float net;
};

int main(){
    struct Employee emp[50];    //Array capable of storing upto 50 employees
    int count = 0;              //Keeps track of how many employees are added
    int choice;
    int searchid;
    int found;

    while(1){
        //Main menu display 
        printf("\n------------------------------------");
        printf("n      Employee Payroll System        ");
        printf("\n------------------------------------");
        printf("\n1. Add New Employee Record");
        printf("\n2. View All Employee Salaries");
        printf("\n3. Search Employee by ID");
        printf("\n4. Exit program");
        printf("\n------------------------------------");
        printf("\nEnter choice(1-4):");
        scanf("%d", &choice);

        //Exit the program
        if(choice == 4){
            printf("\nExiting program, Goodbye!!\n");
            break;
        }

        switch (choice) {
            case 1: // Add employee
                if(count >= 50){
                    printf("\nError: System database is full!\n");
                    break;
                }

                printf("\nEnter Employee ID:");
                scanf("%d", &emp[count].id);
                printf("\nEnter Employee Name:");
                scanf("%d", &emp[count].name);
                printf("\nEnter basic Monthly salary: Rs");
                scanf("%d", &emp[count].basic);

                //Math processing
                emp[count].hra = emp[count].basic * 0.20;      //20% HRA
                emp[count].da = emp[count].basic * 0.10;       //10% DA
                emp[count].pf = emp[count].basic * 0.12;       //12% PF

                emp[count].gross = emp[count].basic + emp[count].hra + emp[count].da;
                emp[count].net = emp[count].gross - emp[count].pf;

                count++;
                printf("\nSuccess: Record added successfully!\n");
                break;

            case 2:  //View All Records
                if(count == 0){
                    printf("\nNo employee data available yet.\n");
                    break;
                }

                printf("\n------------------------------------\n");
                printf("%-5s %-15s %-10s %-10s %-10s %-10s\n", "ID", "Name", "Basic", "HRA", "Gross","Net Pay");
                printf("---------------------------------------\n");

                for(int i=0; i<count; i++){
                    printf("%-5d %-15s %-10.2f %-10.2f %-10.2f %-10.2f\n",
                        emp[i].id, emp[i].name, emp[i].basic, emp[i].hra, emp[i].gross, emp[i].net);
                }
                printf("----------------------------------------------------\n");
                break;

            case 3:  //Search Employee
                if(count == 0){  
                    printf("\nNo data available to search.\n");
                    break;
                }

                printf("\nEnter Employee ID to look up:");
                scanf("%d", &searchid);
                found=0;

                for(int i=0; i<count; i++){
                    if(emp[i].id == searchid){
                        printf("\n-------Match found for ID %d-----", emp[i].id);
                        printf("\nName   : %s", emp[i].name);
                        printf("\nBasic Salary: Rs%.2f", emp[i].basic);
                        printf("\nGross Salary: Rs%.2f(Includes HRA &DA)", emp[i].gross);
                        printf("\nPF Deduction: Rs%.2f", emp[i].pf);
                        printf("\nNet Takehome: Rs%.2f", emp[i].net);
                        printf("\n-------------------------------\n");
                        found=1;
                        break;
                
                    }
                }
                if(found==0){
                    printf("\nEmployee ID %d not found in database.\n", searchid);
                }
                break;
            
            default:
            printf("\nInvalid selection! Please enter numbers 1 to 4.\n");

            
        }
    }

    return 0;
}