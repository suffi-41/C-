#include<iostream>
using namespace std;

class complex{
    private:
     int x,y;
    public:
     void set_data(int x, int y){
         this->x=x;
         this->y=y;
     }

     void print_complex_no(){
        cout<<"Complex no is :"<<x<<"+"<<y<<"i"<<endl;
     }

     void complex_sum(complex o, complex p){
        x=o.x+p.x;
        y=o.y+p.y;
     }
    
};

class Employee{
  
     string employee_name;
     int employee_id;
     float employee_salary;
      
  public:
    void set_details(string employee_name, int employee_id, float employee_salary);
    void print_employee_details();
     
     };

void Employee::set_details(string employee_name, int employee_id, float employee_salary){
     this->employee_name=employee_name;
     this->employee_id=employee_id;
     this->employee_salary=employee_salary;
}

void Employee::print_employee_details(){
    cout<<"Employee name is:"<<employee_name<<endl;
    cout<<"Employee id is :"<<employee_id<<endl;
    cout<<"Employee salary is:"<<employee_salary<<endl;
}

class Bank{
    private:
      int principle;
      int year;
      float intrance;
      int return_money;

    public:
      Bank(int p, int y, float r);
      void display_bank_account_details();    
};


Bank::Bank(int p, int y,float r){
     principle=p;
     year=y;
     intrance=r;
     return_money=principle; 

     for(int i=0; i<y; i++){
        return_money+=return_money*(i+intrance);
     }   
}

void Bank::display_bank_account_details(){
     cout<<"If you will deposite "<<principle<<" reupees  in your account ,after" <<year<< "year ,you will get "<<return_money<<endl;
}


int main(){
    Bank aman(100,2,0.5);
    aman.display_bank_account_details();


    int x,y;
    cout<<"Enter the value of x:";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;

    complex s1,s2,s3;
    s1.set_data(x,y);
    s1.print_complex_no();
    s2.set_data(x,y);
    s2.print_complex_no();
    s3.complex_sum(s1,s2);
    s3.print_complex_no();

cout<<endl;
    
    Employee sufiyan;
    
    sufiyan.set_details("Mohd Sufiyan", 41, 50000);
    sufiyan.print_employee_details();

    return 0;

}