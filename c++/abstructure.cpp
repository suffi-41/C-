#include<iostream>
using namespace std;

class Abstructure{
    protected:
      string first_name;
      string last_name;
    
    public:
         Abstructure(string first_name, string last_name){
            this->first_name=first_name;
            this->last_name=last_name;
        }

        virtual void display()=0;
};

class Second_Abstructure:public Abstructure{
    protected:
       string father_name;
       string mother_name;

    public:
       Second_Abstructure(string first_name, string last_name, string father_name, string mother_name):Abstructure(first_name, last_name){
             this->father_name=father_name;
             this->mother_name=mother_name;
       }

       void display(){
             cout<<"First name is:"<<first_name<<endl;
             cout<<"Last name is:"<<last_name<<emdl;
             cout<<"Father name is:"<<father_name<<endl
             cout<<"Mother name is:"<<mother_name<<endl;
       }
};

int main(){

 Abstructure abs("mohd","sufiyan");
 Abstructure *pointer_abs;

 Second_Abstructure second_abs("mohd", "sufiyan", "mohd shabber","Shabnam khantun");
 pointer_abs=&second_abs;
 pointer_abs->display();

    return 0;
}