//Wap in c to create menu driven array operations system:

#include<stdio.h>
#define MAX 100

//Global variables for simplicity
int arr[MAX], size=0;

void display(){
    if(size==0){
        printf("Array is empty.\n");
        return ;
    }
    printf ("Array elements: ");
    for(int i=0; i<size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}

void create(){
    printf("Enter size(Max %d): ", MAX);
    scanf("%d", &size);
    if(size<0 || size>MAX){
        size=0;
        printf("Invalid size!\n");
        return;
    }
    printf("Enter %d elements: ", size);
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
}

void insert(){
    int pos,val;
    if(size>=MAX){
        printf("Error: Array Overflow!!\n");
        return;
    }
    printf("Enter index(0 to %d) and value: ", size);
    scanf("%d %d", &pos, &val);
    if(pos<0 || pos>size){
        printf("Invalid index!\n");
        return;
    }
    for(int i=size; i>pos; i--){
        arr[i]=arr[i-1];
        arr[pos]=val;
        size++;
    }
    printf("Element inserted.\n");
}

void deleteElement(){
    int pos;
    if(size==0){
        printf("Error: Array Underflow!\n");
        return;
    }
    printf("Enter index to delete(0 to %d): ", size-1);
    scanf("%d", &pos);
    if(pos<0 || pos>=size) {
        printf("Invalid index!\n");
        return;
    }
    printf("Deleted: %d\n", arr[pos]);
    for(int i=pos; i<size-1; i++){
        arr[i]= arr[i+1];
        size--;
    }
}

void search(){
    int val, found= 0;
    if(size==0){
        printf("Array is empty.\n");
        return;
    }
    printf("Enter value to search: ");
    scanf("%d", &val);

    for(int i=0; i<size; i++){
        if(arr[i] == val){
            printf("Found at index: %d\n", i);
            found=1;
        }
    }
    if(!found){
        printf("Element not found.\n");
    }
}

int main(){
    int choice;
    while(1){
        printf("\n--------------Array Operations-----------\n");
        printf("1. Create 2. Display 3. Insert 4. Delete 5. Search 6. Exit\n");
        printf("Enter choice: ");
        if(scanf("%d", &choice) != 1){
            while(getchar() != '\n');      //Clear input buffer
            continue;
        }
        if(choice==6){
            break;
        }

        switch(choice){
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: deleteElement(); break;
            case 5; search(); break;
            default: printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}