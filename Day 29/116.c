//Wap in c to create Inventory management system:

#include<stdio.h>

struct Item{
    int id;
    char name;
    int qty;
    float price;
};

int main(){
    struct Item inv[100];
    int count=0;
    int choice, searchId, found;

    while(1){
        printf("\n---------------Inventory System------------\n");
        printf("1. Add Product\n");
        printf("2. View All Stock\n");
        printf("3. Update Quantity\n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice==1){
            if(count>=100){
                printf("Inventory full!\n");
                continue;
            }
            printf("Enter ID, Name, Quantity, Price: ");
            scanf("%d %s %d %f", &inv[count].id, inv[count].name, &inv[count].qty, &inv[count].price);
            count++;
            printf("Product added!\n");
        }
        else if(choice==2){
            if(count==0){
                printf("Inventory is empty.\n");
                continue;
            }
            printf("\nID\tName\t\tQty\tPrice\n");
            printf("-----------------------------------\n");
            for(int i=0; i<count; i++){
                printf("%d\t%s\t\t%d\tRs%.2f\n", inv[i].id, inv[i].name, inv[i].qty, inv[i].price);
            }
        }
        else if(choice==3){
            printf("Enter product ID to update: ");
            scanf("%d", &searchId);
            found=0;

            for(int i=0; i<count; i++){
                if(inv[i].id==searchId){
                    printf("Current Qty of %s is %d. Enter new Qty: ", inv[i].name,inv[i].qty);
                    scanf("%d", &inv[i].qty);
                    printf("Quantity updated successfully!\n");
                    found=1;
                    break;
                }
            }
            if(!found){
                printf("Product ID is not found!\n");
            }
        }
        else if(choice==4){
            printf("Exiting program.\n");
            break;
        }
        else{
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}