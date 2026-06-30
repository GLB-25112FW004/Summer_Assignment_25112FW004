//Wap in c to create Marksheet Generation System: 

#include<stdio.h>
#include<string.h>

#define NUM_SUBJECTS 5

struct Student {
    char name[50];
    int roll;
    int marks[NUM_SUBJECTS];
    int total;
    float pct;
    char grade[10];
};

//Function Prototype 
struct Student input_student_data(char subjects[NUM_SUBJECTS][20]);
struct Student calculate_results(struct Student s);
void display_single_marksheet(struct Student s, char subjects[NUM_SUBJECTS][20]);

int main() {
    char subjects[NUM_SUBJECTS][20]={"Maths","Science","English","History","Computer"};
    int num_students;

    printf("--------------Dynamic Marksheet Generation System-----------\n");
    printf("How many student marksheet do you want to generate? ");
    scanf("%d", &num_students);

    //Dynamic processing loop
    for(int i=0; i<num_students; i++){
        struct Student current_student;

        printf("\n------------------------------------------");
        printf("\n Processing Data for Student %d of %d", i+1, num_students);
        printf("\n------------------------------------------");

        current_student= input_student_data(subjects);
        current_student= calculate_results(current_student);
        display_single_marksheet(current_student,subjects);


    }
    printf("\nAll marksheets processed successfully! Bye.\n");
    return 0;
}

//Handles input collection
struct Student input_student_data(char subjects[NUM_SUBJECTS]){
    struct Student s;

    printf("Enter Student Name: ");
    scanf(" %[^\n]s", s.name);

    printf("Enter Roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks out of 100: \n");
    for(int i=0; i<NUM_SUBJECTS; i++){
        printf(" %s: ", subjects[i]);
        scanf("%d", &s.marks[i]);
    }
    return s;
}

//Evaluates totals, percentage, and final grade 
struct Student calculate_results(struct Student s){
    s.total=0;
    int failed=0;

    for(int i=0; i<NUM_SUBJECTS; i++){
        s.total+=s.marks[i];
        if(s.marks[i]< 35){
            failed=1;
        }
    }
    s.pct=(float)s.total/NUM_SUBJECTS;

    if(failed){
        strcpy(s.grade, "FAIL");
    }else{
        if(s.pct>= 85.0){
            strcpy(s.grade,"A+");
        }else if(s.pct>=75.0){
            strcpy(s.grade, "A");
        }else if(s.pct>=60.0){
            strcpy(s.grade, "B");
        }
        else if(s.pct>=50.0){
            strcpy(s.grade, "C");
        }
        else{
            strcpy(s.grade, "D");
        }
    }
    return s;
}

//Renders the marksheet template table 
void display_single_marksheet(struct Student s, char subjects[NUM_SUBJECTS]){
    printf("\n----------------------------------------------");
    printf("\n        OFFICAL MARKSHEET                     ");
    printf("\n----------------------------------------------");
    printf("\n Name     : %s", s.name);
    printf("\n Roll no. : %d", s.roll);
    printf("\n-----------------------------------------------");
    printf("\n %-20s | %s", "Subject", "Marks obtained");
    printf("\n-----------------------------------------------");
    for(int i=0; i<NUM_SUBJECTS; i++){
        printf("\n %-20s |  %d", subjects[i],s.marks[i]);
    }
    printf("\n----------------------------------------------");
    printf("\n Total marks: %d/%d", s.total, NUM_SUBJECT*100);
    printf("\n Percentage : %.2f%%", s.pct);
    printf("\n Final Grade: %s", s.grade);
    printf("\n----------------------------------------------\n");
}






