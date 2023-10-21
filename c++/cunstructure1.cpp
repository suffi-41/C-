#include<iostream>
#include<cmath>
using namespace std;
/*
class Simple_calculator{
    private:
     int x,y;

    public:
      void take_number(){
         cout<<"Enter the value of x:";
         cin>>x;
         cout<<"Enter the value of y:";
         cin>>y;
      } 

      void simple_calculator(){
         cout<<"The value of a+b is:"<<x+y<<endl;
         cout<<"The value of a-b is:"<<x-y<<endl;
         cout<<"The value of a*b is:"<<x*y<<endl;
         cout<<"The value of a/b is:"<<x/y<<endl;
      }
      

      void performpration(){
         cout<<"The value of sin(x) is:"<<sin(x)<<endl;
         cout<<"The value of cos(x) is:"<<cos(x)<<endl;
         cout<<"The value of tan(x) is:"<<tan(x)<<endl;
         cout<<"The value of sin(y) is:"<<sin(y)<<endl;

      }  
};

class Habridcalculator:public Simple_calculator{

};
*/
// cunstructure in derive classes

class Student{
    private:
      string name;
      int id;
    
    public:
     Student(string name, int id ){
        this->name=name;
        this->id=id;
     }

     void display_student_details(){
        cout<<"The name of student is:"<<name<<endl;
        cout<<"Student id is:"<<id<<endl;
     }
};

class Employee :public Student{
    private:
      string employee_name;
      int employee_id;
    
    public:
       Employee(string name , int id, string employeee_name, int employee_id):Student(name, id){
              this->employee_name=employee_name;
              this->employee_id=employee_id;
       }

       void display_employee_details();  
};

void Employee::display_employee_details(){
    cout<<"Employee name is:"<<employee_name<<endl;
    cout<<"Employee id is:"<<employee_id<<endl;
}

// initilization of custructure

class Number{
    private:
        int a,b; 
    
    public:
        Number(int i,int j):a(i),b(j+i){
            cout<<"this is a cunstructure of number class:"<<endl;
        }

        void display(){
            cout<<a<<endl;
            cout<<b<<endl;
        }
};



int main(){
    
   Number num(4,5);
   num.display();

   Employee sufiyan("sufiyan", 41, "Arman",34);
   sufiyan.display_student_details();
   sufiyan.display_employee_details();
   /*
   Habridcalculator cal;
   cal.take_number();
   cal.simple_calculator();
   cal.performpration();
*/
 return 0;
}