//Wap in c to develop complete mini project using arrays, strings and functions:

//Mini Project
//Blood Group Matcher and Compatibility Finder

#include<stdio.h>
#include<string.h>

#define Total_types 8


//Function to print the available blood bags in the bank
void viewInventory(char groups[][5], int inventory[]){
    printf("\n-----Blood Bank Stock Level----\nBlood Type\tBags Available\n");
    for(int i=0; i<Total_types; i++){
        printf("%-10s \t%d bags\n", groups[i], inventory[i]);
    }
}

//Function to find compatible donor groups on medical rules
void findBlood(char groups[][5], int inventory[]){
    char patientType[5];
    int foundIndex=-1;

    printf("\nEnter Patient Blood Type:");
    scanf("%s", patientType);

    //Locate the array index of the input blood type
    for(int i=0; Total_types; i++){
        if(strcmp(groups[i], patientType)==0){
            foundIndex=i;
            break;
        }
    }

    if(foundIndex==-1){
        printf("Invalid blood type entered!\n");
        return;
    }

    printf("\n----Compatible Donors for %s---\n",patientType);
    printf("%-12s\t%-12s\n","Donor Type", "Stock Status");

    //Check compatibility for each of the 8 blood types
    for(int i=0; i<Total_types; i++){
        int isCompatible=0;

        //Medical compatibility rules logic matrix 
        if(strcmp(groups[i],"O-")==0) {
            isCompatible=1; //O- is the universal donor

        }else if(strcmp(patientType,"AB")==0){
            isCompatible=1; //AB+ is the universal recipient

        }else if(strcmp(patientType, "A+")==0 && (strcmp(groups[i],"A-")==0 || strcmp(groups[i],"O+")== 0 || strcmp(groups[i],"A+")==0)){
            isCompatible=1;
        }else if(strcmp(patientType, "A-")==0 && strcmp(groups[i],"A-")==0) {
            isCompatible=1;
        }else if(strcmp(patientType, "B+")==0 &&(strcmp(groups[i],"B-")==0 || strcmp(groups[i],"O+")==0 || strcmp(groups[i],"B+")==0)){
            isCompatible=1;
        }else if(strcmp(patientType,"B-")==0 && strcmp(groups[i],"B-")==0){
            isCompatible=1;
        }else if(strcmp(patientType,"O+")==0 && strcmp(groups[i],"O+")==0){
            isCompatible=1;
        }else if(strcmp(patientType,"AB-")==0 && strcmp(groups[i],"A-")==0 || strcmp(groups[i],"B-")==0 || strcmp(groups[i],"AB-")==0){
            isCompatible=1;
        }

        if(isCompatible){
            printf("%-12s\t%-12s(%d bags)\n", groups[i],(inventory[i]>0)? "Available":"Out of stock", inventory[i]);

        }
    }


}

int main(){
    //2D array for blood strings and 1D parallel array for bag quantities
    char bloodGroups[Total_types][5]={"A+","A-","B+","B-","AB+","AB-","O+","O-"};
    int stock[Total_types]={12,0,8,3,1,15,2,25,4};
    int choice;

    while(1){
        printf("\n-------Blood Bank Matcher & Compatibility Finder-----\n");
        printf("1.View Current Inventory Stock\n2. Search Compatible dinors for patient\n3. Exit\n");
        printf("Select menu option: ");
        scanf("%d",&choice);

        if(choice==1){
            viewInventory(bloodGroups, stock);
        }else if(choice==2){
            findBlood(bloodGroups, stock);
        }else if(choice==3){
            printf("System shutting down securely.\n");
            break;
        }else{
            printf("Invalid selection! Enter 1,2 or 3.\n");
        }
    }
    return 0;
}