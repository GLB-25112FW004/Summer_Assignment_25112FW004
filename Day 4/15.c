//Wap in c to check for Armstrong number:

#include<stdio.h>
#include<math.h>
int main(){

    //Variable declaration 
    int num, originalnum,remainder,total=0, resultant=0;

    //Input by the user
    printf("Enter the number to check:");
    scanf("%d",&num);

    //Save original number
    originalnum=num;
    while(num!=0){
        num=num/10;
        total++;
    }

    //Restore  value of number
    num=originalnum;

    //Calculate Armstrong sum
    while(num!=0){
        remainder= num%10;
        resultant+= pow(remainder,total);
        num/=10;
    }

    //Final output
    if(resultant==originalnum){
        printf("%d is an Armstrong number.\n", originalnum);
    }
    else{
        printf("%d is not an Armstrong number.\n",originalnum);
    }

    return 0;

}