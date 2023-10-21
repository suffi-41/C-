#include<iostream>
using namespace std;

class Baseclass{
    private:
       string name;
    public:
       int varbase=7;

       void set_name(string name){
             this->name=name;
         }

       virtual void display(){
           cout<<"Display base class variable :"<<varbase<<endl;
         }

       virtual void display_name(){
            cout<<"Display name fuction of base class :"<<name<<endl;
       }
       
};


class Deriveclass:public Baseclass{
     public:
        int varderive=3;

        void display(){
            cout<<"Display derive class variable is:"<<varderive<<endl;
         }

        void display_name(){
                 cout<<"Display name function of derive class:"<<endl;
          }
};


class Cemera{
    protected:
       string cemera_name;

    public:
        void set_cemera_name(string cemera_name){ 
             this->cemera_name=cemera_name;
        }

        virtual void display_details(){
            cout<<"Cenera name is:"<<cemera_name<<endl;
        }
};

class Phone:public Cemera{
    protected:
      string phone_name;

    public:
       void set_phone_name(string phone_name){
            this->phone_name=phone_name;
       }

       void display_details(){
           cout<<"Phone name is:"<<phone_name<<endl;
           cout<<"Cemera name is:"<<cemera_name<<endl;
       }

       void print_information();

};

void Phone::print_information(){
     cout<<"This is phone class , this class be provided some information about phone, If you know about phone ,which type of is better for you and me ,"<<endl;
     cout<<"many type of phone is availabe in the market , In market have two type phone , first is original phone , second is dublicet phone,"<<endl;
}

class Smart_phone:public Cemera{
    protected:
      string smart_phone_name;
 
    public:
       void set_smart_phone_name(string smart_phone_name){
             this->smart_phone_name=smart_phone_name;
       }

       void display_details(){
            cout<<"Phone name is :"<<smart_phone_name<<endl;
            cout<<"Cemera name is"<<cemera_name<<endl;
       }
};

int main(){
      Cemera *cemera_pointer=new Cemera;
      Phone phone_object;
      cemera_pointer=&phone_object;
      Smart_phone smart_phone_object;
      smart_phone_object.set_smart_phone_name("Redmi");
      cemera_pointer=&smart_phone_object;
      phone_object.set_phone_name("Redmi note 10 t");
      phone_object.print_information();
      cemera_pointer->set_cemera_name("4k");
      cemera_pointer->display_details();
      

      Baseclass *base_class_pointer=new Baseclass;
      Deriveclass derive_class;
      base_class_pointer=&derive_class;
      base_class_pointer->display();
      base_class_pointer->set_name("sufiyan");
      base_class_pointer->display_name();

    return 0;
}