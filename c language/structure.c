#include<stdio.h>
#include<string.h>

struct Employee{
    char Employee_name[100];
    int Employee_id;
    float salary;
};

typedef struct Student{
      char name[100];
      int roll_no;
      float cgp;
}student;

int main(){
      struct Employee arman;
      char enployee_name[100];
      strcpy




     char name[100]="sufiyan";
      student sufiyan;
      sufiyan.roll_no=24;
      sufiyan.cgp=9.8;
      strcpy(sufiyan.name, name);
      printf("\n%d",sufiyan.roll_no);
      printf("\n%s",sufiyan.name);
      printf("\n%f",sufiyan.cgp);



    return 0;
}