#include<iostream>
using namespace std;

// vertual class
class Student{
    protected:
      int roll_no;
    
    public:
       void set_roll_no(int roll){
            roll_no=roll;
       }

       void display_roll_no(){
          cout<<"Student roll no is:"<<roll_no<<endl;
       }     
};

class Text: virtual public Student{
    protected:
      int maths, physics;
    
    public:
      void set_marks(int maths, int physics){
          this->maths=maths;
          this->physics=physics;
      }
    
      void display_marks(){
           cout<<"maths marks is:"<<maths<<endl;
           cout<<"physics marks is:"<<physics<<endl;
      }
};


class Sport:virtual public Student{
    protected:
      int sport_marks;

    public:
      void set_sport_mark(int sport_marks){
           this->sport_marks=sport_marks;
      }

      void display_sport_marks();
};

void Sport::display_sport_marks(){
    cout<<"sport marks is:"<<sport_marks<<endl;
}

class Marks: public Text, public Sport{
      protected:
        float persentage;
      
      public:
        void set_persentage(){
           persentage=(maths+physics+sport_marks)/3;
           }

        void display_persentage();
};

void Marks::display_persentage(){
    cout<<"Total persentage of the marks is:"<<persentage<<endl;
}
/*
class HumanNature{
    private:
      string human;
    
    public:
       HumanNature(string human){
         this->human=human;
       }

       void display_human(){
         cout<<"you will eat :"<<human<<endl;
       }
};

class Dog:virtual public HumanNature{
    private:
      string barks;

    public:
      Dog(string human,string barks):HumanNature(human){
         this->barks=barks;
      }

      void display_dog();
};
void Dog::display_dog(){
    cout<<"Dog is:"<<barks<<endl;
}

class Birds:virtual public HumanNature{
  private:
    string bird_name;
  
  public:
     Birds(string Hunam, string bird_name):HumanNature(human){
        this->bird_name=bird_name;
     }

     void display_birds(){
        cout<<"birds name is:"<<bird_name<<endl;
     }
};


class Animal:public Dog, public Birds{
    private:
       string  animal_name;
      
    public:
        Animal(string human, string barks,  string bird_name, string animals_name):Dog(human,barks),Birds(human,bird_name){
           this->animal_name=animal_name;
        }

        void display_animal(){
           cout<<"Animals name is:"<<animal_name<<endl;
        }
};

*/


int main(){

  Marks sufiyan;
   sufiyan.set_roll_no(41);
   sufiyan.set_marks(92,97);
   sufiyan.set_sport_mark(80);
   sufiyan.display_roll_no();
   sufiyan.display_marks();
   sufiyan.display_sport_marks();
   sufiyan.set_persentage();
   sufiyan.display_persentage();

    return 0;
}