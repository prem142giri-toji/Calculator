#include<stdio.h>
int main(){
float X;
float Y;
float Z; 

printf("\nEnter for addition: ");
scanf("%f %f %f",&X,&Y,&Z);
float Addition=X+Y+Z;
printf("Addition of 3 numbers:%f",Addition);



printf("\nEnter for substration: ");
scanf("%f %f %f",&X,&Y,&Z);
float substration=X-Y-Z;
printf("substration of 3 numbers:%f",substration);



printf("\nEnter for multiplication: ");
scanf("%f %f %f",&X,&Y,&Z);
float multiplication=X*Y*Z;
printf("multiplication of 3 numbers:%f",multiplication);


printf("\nEnter for division: ");
scanf("%f %f %f",&X,&Y,&Z);
float division=X/Y/Z;
printf("division of 3 numbers:%f",division);
    

    
printf("\nEnter the obtained marks: ");
scanf("%f",&X);
printf("\nEnter the full marks: ");
scanf("%f",&Y);
float percentage=X*100/Y;
printf("Percentage you got:%f",percentage);



    return 0;
}
