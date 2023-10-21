#include<stdio.h>

int main(){
/*switch statment */
char day;
printf("Enter the first letter of the day:");
scanf("%c",&day);
switch(day){
   case 'm':printf("Today is Monday:");
           break;
   case 't': printf("today is Tuesday: ");
           break;
   case 'w' :printf("Today is Wednesday:");  
           break;
   case 'T' : printf("Today is Thuesday:") ;
           break;
   case 'f' :printf("Todey is Friday:");
           break;
   case 's' : printf("Today is saturaday:");
           break;
   case 'S' :printf("Today is Sunday:");
               break;
   default : printf("invalid day");                     



}


    return 0;
}