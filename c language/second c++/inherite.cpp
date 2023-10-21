#include<iostream>
#include<string>
using namespace std;


class Reverse{
    protected:
      int n,arr[3];

    
    public:
       Reverse(){
          cout<<"Enter the arr size:";
          cin>>n;
           for(int i=0; i<n; i++){
              cout<<"Enter the index("<<i+1<<")";
              cin>>arr[i]; 
            }
        }

        void reverse_arr();
        void print_arr();
      
};



void Reverse::reverse_arr(){
    for(int i=0; i<n/2; i++){
        int first_arr=arr[i];
        int second_arr=arr[n-i-1];
        arr[i]=second_arr;
        arr[n-i-1]=first_arr;
    }
}

void Reverse::print_arr(){
     static int i;
     cout<<"Array is:"<<endl;
     for(i; i<n; i++){
        cout<<"Index("<<i+1<<")::"<<arr[i]<<endl;
    }
}


class InheriteReverse : protected Reverse{
    protected:
      
      string name[5];

    public:
       InheriteReverse(){
            static int i;
            cout<<"Enter the multiple name:"<<endl;
            for(i; i<4; i++){
              cin>>name[i];
            }
       }

       void reverse_string();
       void print_string();
       
      
};

void InheriteReverse::reverse_string(){
    static int i;
    for(i; i<4/2; i++){
        string first_name=name[i];
        string second_name=name[4-i-1];
        name[i]=second_name;
        name[4-i-1]=first_name;
    }
    cout<<endl;
}

void InheriteReverse::print_string(){
    static int i;
    while(i<4){
        cout<<name[i]<<endl;
        i++;
    }
}

class Employee{
    private: 
      int id;
      float salary;
      string name[10];
      static int count;


    public:
       Employee(int id, float salary, string name){
               this->id=id;
               this->salary=salary;
               this->name[count]=name;
               count++;
       }

       void display_employee_detials(){
              cout<<"Employee name is:"<<name[count]<<endl;
              cout<<"Employee id is:"<<id<<endl;
              cout<<"Empoyee salary is:"<<salary<<endl;
       }

        static void print_staitic_number(){
         cout<<count<<endl;
         count++;
       }
       
};
 
int Employee::count;

int main(){

     Employee sufiyan(41,5000,"sufiyan");
     sufiyan.display_employee_detials();
     sufiyan.print_staitic_number();
     for(int i=0; i<10; i++){
        sufiyan.print_staitic_number();
     }

     
    //   InheriteReverse name;
    //   name.reverse_string();
    //   name.print_string();
    //   name.reverse_arr();
    //   name.print_arr();
//    Reverse array;
//    array.reverse_arr();
//    array.print_arr();
  return 0-;}