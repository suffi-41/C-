#include<iostream>
using namespace std;

 typedef struct Employee{
        int arr[100];
        float cgp[100];
        string name[100];

 }Employee;

 typedef struct Student{
         string name;
         float cgp;
         int Roll;

 }Student;

int main(){
       Student  student[5];
       static int i;
       while(i<5){
         cout<<"Enter your name:";
         cin>>student[i].name;
         cout<<"Enter your cgp:";
         cin>>student[i].cgp;
         cout<<"Enter your roll no:";
         cin>>student[i].Roll;
         
          i++;
       }


       for(int i=0; i<5; i++){
              cout<<student[i].name<<endl;
              cout<<student[i].cgp<<endl;
              cout<<student[i].Roll<<endl;
              cout<<endl;
       }
 /*     
 Employee Employees;
 Employee *emp=&Employees;
  emp->arr[0]=34;
  emp->arr[1]=35;
  emp->arr[2]=36;
  emp->arr[3]=57;

  emp->cgp[0]=9.86;
  emp->cgp[1]=9.64;
  emp->cgp[2]=8.45;
  emp->cgp[3]=5.5;

  emp->name[0]="Mohd Sufiyan";
  emp->name[1]="Mohd Adnan";
  emp->name[2]="Mohd Shabban";
  emp->name[3]="Mohd Shabber";
  for(int i=0; i<3; i++){
    cout<<emp->arr[i]<<endl;
    cout<<emp->cgp[i]<<endl;
    cout<<emp->name[i]<<endl;
    cout<<endl<<endl;
    */
  
    return 0;
}