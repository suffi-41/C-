#include<stdio.h>
#include<string.h>

struct employee{
    int roll_no;
    float cgp;
    char name[100];
};

void print_structure_method(struct employee si){
    /* printf("%s",s1.name);
     printf("%d",s1.id);
     printf("%f",s1.cgp);
     */
     printf("\n%d",si.roll_no);
     printf("\n%f",si.cgp);
     printf("\n%s",si.name);
}

typedef struct worker{
    char name[100];
    int phone_no;
    float salary;

}wor;

void print_worker_detaile(wor *ptr){
      printf("%s",ptr->name);
      printf("%d",ptr->phone_no);
      printf("%f",ptr->salary);
}


typedef struct Student{
    char name[100];
    int id;
    float cgp;
}std;

int main(){

    char new_worker_name[100]="sufiyan";
    wor farhan;
    wor *ptr=&farhan;
    strcpy(ptr->name, new_worker_name);
    ptr->phone_no=6307;
    ptr->salary=1000000.000;
  
    print_worker_detaile(&farhan);


    struct employee si={41,9.86,"sufiyan"};
    print_structure_method(si);
    /*
    std sufiyan;
    std *ptr=&sufiyan;
    char new_name[100]="sufiyan";
    ptr->id=41;
    ptr->cgp=9.86;
    strcpy(ptr->name, new_name);
    
    printf("\n%s",ptr->name);
    printf("\n%d",ptr->id);
    printf("\n%f",ptr->cgp);
    */
    return 0;
    }