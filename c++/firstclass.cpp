# include<iostream>
using namespace std;

class Employee{
      int id;
      float cgp;
      string name;
    
    public:
      void set_data(int id, float cgp, string name){
         this->id=id;
         this->cgp=cgp;
         this->name=name;
      }

      void display_data(){
        cout<<"Employee name is "<<name<<endl;
        cout<<"Employee id is "<<id<<endl;
        cout<<"Employee cgp is "<<cgp<<endl;
      }

      void print_information();

};

void Employee::print_information(){
  cout<<"Thanks for using this  programs"<<endl;
}

int main(){
Employee sufiyan;
sufiyan.set_data(41,9.86,"Mohd Sufiyan");
sufiyan.display_data();
sufiyan.print_information();

  return 0;
}
  