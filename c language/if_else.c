#include<stdio.h>

int main(){
     int marks,i;

     while(i != '\n'){
     printf("\nEnter your marks:");
     scanf("%d",&marks);
     
     if(marks>0 && marks<=30){
        printf("your are pass at third division:");
     }

     else if(marks>30 && marks<=60){
        printf("your are pass at second division");
     }

     else if(marks>60 && marks<=80){
        printf("you are pass at first division:");
     }

     else if(marks> 80 && marks<=100){
        printf(" you are with %d marks ",marks);
     } 

     else{
        printf("please , Enter a valid marks");
     }
     i++;
     }

    return 0;
}