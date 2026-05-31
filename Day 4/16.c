//Wap in c to print Armstrong numbers in a range:

#include<stdio.h>
#include<math.h>
int main(){

    //Variable declaration 
    int start,end, num, originalnum,remainder,total=0, resultant=0;
    int temp;

    //Input from the user
    printf("Enter the upper limit and lower limit of range:"); 
    scanf("%d %d",&start,&end);

    //If start number is greater than end, swap the variables
    if(start>end){
        temp= start;
        start=end;
        end= temp;
    }

    printf("Armstrong numbers between %d and % d are: \n", start, end);


    for(originalnum= start; originalnum<= end; orignalnum++){
        num=originalnum;
        //Saving original number

        //Getting total digits
        while(num!=0){
            num/=10;
            total++;
        }

        num=originalnum;

        //Getting Armstrong numbers
        while(num!=0){
            remainder= num%10;
            resultant+= (int)round(pow(remainder,total));

            num/= 10;
        }

        //Final output
        if(resultant== originalnum){
            printf("%d",originalnum);
        }
    }
    printf("\n");
    return 0;
}




