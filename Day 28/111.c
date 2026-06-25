//Wap in c to create ticket booking system: 

#include<stdio.h>
#include<stdlib.h>

#define MAX 10          //Simpler tracking with 10 total seats

int seats[MAX] ={0};    //0:Empty, 1:Booked

void mainmenu(){
    printf("\n----------------------------------------");
    printf("\n       Ticket Booking Main Menu         ");
    printf("\n----------------------------------------");
    printf("\n1. View Seats");
    printf("\n2. Book Ticket");
    printf("\n3. Cancel Ticket");
    printf("\n4. Exit");
    printf("\n----------------------------------------");
    printf("\nChoice");
}
void viewSeats(){
    printf("\n---------------Seat Status------------\n");
    for(int i=0; i<MAX; i++){
        //Displays exact status for every individual seat
        printf("Seat %d: %s\n", i+1, seats[i]==1 ? "BOOKED" : "AVAILABLE");

    }
}

void bookTicket() {
    int seatNo;
    printf("\nEnter seat number(1-%d): ", MAX);
    scanf("%d", &seatNo);

    if(seatNo<1 || seatNo>MAX){
        printf("Invalid seat number!\n");
    }else if(seats[seatNo-1] == 1){
        printf("Seat already taken!\n");
    }else{
        seats[seats-1] =1;     //Mark seats as booked 
        printf("Seat %d booked successfully!\n", seatNo);
    }

}

void cancelTicket() {
    int seatNo;
    printf("\nEnter seat number to cancel(1-%d): ", MAX);
    scanf("%d", &seatNo);

    if(seatNo<1 || seatNo>MAX){
        printf("Invalid seat number!\n");
    }else if( seats[seatNo-1]==0){
        printf("Seat is not booked yet!\n");
    }else{
        seats[seatNo-1]=0; //Free up the seat
        printf("Seat%d cancelled successful!\n", seatNo);
    }
}

int main(){
    int choice;
    while(1){
        mainmenu();     //Calls the main menu
        scanf("%d", &choice);

        if(choice==1){
            viewSeats();
            break;
        }
        else if(choice==2){
            bookTicket();
            break;
        }
        else if(choice==3){
            cancelTicket();
            break;
        }
        else if(choice==4){
            exit(0);
        }
        else{
            printf("Invalid Option!\n");
        }
    }
    return 0;
}