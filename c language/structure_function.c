#include<stdio.h>
#include<string.h>

struct Employee{
    char Employee_name[100];
    long Employee_phone_no;
    double salary;
};
/* function protocall*/
void print_Employee_detailes( struct Employee worker_name);

int main(){
    struct Employee farhan;
    char new_worker_name[100];
    strcpy(farhan.worker_name,new_worker_name);


    return 0;
}

   /*This funcction is  print the worker details*/
void print_Employee_detailes( struct Employee worker_name){
     printf("%s",worker_name.name);
     printf("%d",worker_name.Employee_name);
     printf("%f",worker_name.salary);
}