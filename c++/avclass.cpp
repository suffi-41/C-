#include<iostream>
using namespace std;

class Shop{

  private:         //default value
    float items_prise[100];
    int items_id[100];
    int count;

  public:
    void int_count();
    void set_prise();
    void display_prise();  
};

void Shop::int_count(){
    count=0;
}

void Shop::set_prise(){
    cout<<"Enter the items prise :";
    cin>>items_prise[count];
    cout<<"Enter the item id :";
    cin>>items_id[count];

    count++;
}

void Shop::display_prise(){
    cout<<"("<<count<<")"<<"Item prise is:"<<items_prise[count-1]<<endl;
    cout<<"("<<count<<")"<<"Item id is :"<<items_id[count-1]<<endl;
}


class Employee{
    
  private:
    string Employee_name[100];
    int Employee_id[100];
    float Employee_salary[100];
    static int count;

  public:
    void take_employee_details();
    void display_employee_details();
    static void static_count(void){
      cout<<"Static value of count is :"<<count<<endl;
    }

};

void Employee:: take_employee_details(){
    cout<<"Enter the Employee name :";
    cin>>Employee_name[count];
    cout<<"Enter the Employee id :";
    cin>>Employee_id[count];
    cout<<"Enter the Employee salary :";
    cin>>Employee_salary[count];
        
        count++;
    }

void Employee::display_employee_details(){
    cout<<"Employee's name is "<<Employee_name[count-1]<<endl;
    cout<<"Employee's id is "<<Employee_id[count-1]<<endl;
    cout<<"Emplpyee's salary is "<<Employee_salary[count-1]<<endl;
}

int Employee::count;

int main(){

    Shop relice;
    relice.int_count();
    relice.set_prise();
    relice.display_prise();
    relice.set_prise();
    relice.display_prise();

    cout<<endl<<endl;

    Employee sufiyan;
    sufiyan.take_employee_details();
    sufiyan.display_employee_details();
    sufiyan.static_count();
    sufiyan.take_employee_details();
    sufiyan.display_employee_details();
    sufiyan.static_count();




    return 0;
}