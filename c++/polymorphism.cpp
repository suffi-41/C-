#include<iostream>
using namespace std;

class Base{
   private:
      string base_name;
    public:
       void set_name(string base_name){
            this->base_name=base_name;
       }
        
        void display_base_class(){
            cout<<"base class name is"<<base_name<<endl;
        }

};

class Derive:public Base{
    private: 
      string derive_name;
    
    public:
       void set_name_string(string derive_name){
             this->derive_name=derive_name;
       }
       
        void display_derive_class(){
             cout<<"Derive class name is:"<<derive_name<<endl;
        }
};


class Base1{
    public:
      int  base_num;
    
      void display_base_num(){
         cout<<"base class number is:"<<base_num<<endl;
      }
};

class Derive1:public Base1{
    public:
      int derive_num;
       
      void display_derive_num(){
           cout<<"Derive class number is:"<<derive_num<<endl;
      }
};


int main(){
      Base *base_class_pointer=new Base;
      Derive derive_class;

      base_class_pointer=&derive_class;
      base_class_pointer->set_name("sufiyan");
      base_class_pointer->display_base_class();

      Base1 *base1_class_pointer=new Base1;
      Derive1 derive1_class;
      
      base1_class_pointer=&derive1_class;
      base1_class_pointer->base_num=23;
      base1_class_pointer->display_base_num();

      // base1_class_pointer->derive_nim=45;
      // basw1_class_pointer->display_derive_num();   it's also throw erore
      
      // base_class_pointer->set_name_string("adnan");
      // base_class_pointer->display_derive_class();    its throw erore
    return 0;
}