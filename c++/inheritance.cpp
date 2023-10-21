#include<iostream>
using namespace std;

/*single inherritance*/

class Humen{
    private:
     string name;
     int id;
     
    public:
     void set_data(){
        cout<<"Enter your name:";
        cin>>name;
        cout<<"Enter your id:";
        cin>>id;
     }

     void display_data();
};

void Humen::display_data(){
    cout<<"Your name is:"<<name<<endl;
    cout<<"Your id is also:"<<id<<endl;
}

class Employee:public Humen{
    private:
      float salary;
    
    public:
      void take_emplyee_data(){
        cout<<"Enter your salary:";
        cin>>salary;
      }

      void display_details();
};

void Employee::display_details(){
    cout<<"Employee salary is:"<<salary<<endl;
}


class Programmer:public Employee{
    private:
      string language_name;

    public:
     void take_language_name(){
        cout<<"Enter the language name:";
        cin>>language_name;
     }

     void display_language_name();
};

void Programmer::display_language_name(){
    cout<<"You have learned "<<language_name<<"language"<<endl;
}

/*multiple inheritance*/

class Student:public Humen{

};

class Exam:public Student{
    protected:
      int maths,physics;

    public:
      void take_marks(){
        cout<<"Enter the maths marks:";
        cin>>maths;
        cout<<"Enter the physics marks:";
        cin>>physics;
      }       
};

class marks:public Exam{

    public:
      void display_marks(){
            cout<<"you have got marks in maths:"<<maths<<"and physics also:"<<physics<<endl;
        } 
};

class Persentage:public marks{
    protected:
      float persentege;

    public:
     void persentege_of_mark(){
        persentege=(maths+physics)/2;
        cout<<"you have got "<<persentege<<"%"<<endl;
     }

};

/*multilevel inheritance */

class Brother{
    protected:
     string brother_name;

    public:
      void take_bother_data(){
         cout<<"Enter your brother name:";
         cin>>brother_name;
      }
};

class Sister{
    protected:
      string sister_name;
    
    public:
    void take_sister_name(){
        cout<<"Enter your sister name";
        cin>>sister_name;
    }

};

class Family: public Brother ,public Sister{
    protected:
      string father_name;
      string mother_name;
    
    public:
       void take_prensts_name(){
          cout<<"Enter your father name:";
          cin>>father_name;
          cout<<"Enter your mather name also:";
          cin>>mother_name;
       }

       void display_family_data(){
        cout<<"Your brother name is:"<<brother_name<<endl;
        cout<<"Your sister name is:"<<sister_name<<endl;
        cout<<"Your mother name is :"<<mother_name<<endl;
        cout<<"Your father name is :"<<father_name<<endl;
       }    
};

class Camera{
    protected:
     string camera_model;
    
    public:
     void take_camera_model(){
       cout<<"Enter the camera model:";
       cin>>camera_model; 
     }
};

class Vivo:public Camera{
    private:
      string vivo_model;
    
    public:
       void take_vivo_model(){
        cout<<"Enter the vivo model:";
        cin>>vivo_model;
       }

       void display_vivo_model();
};

void Vivo::display_vivo_model(){
      cout<<vivo_model<<" model have camera model"<<camera_model<<endl;
}

class Redmi:public Camera{
    protected:
     string redmi_model;

    public:
      void take_redmi_model(){
        cout<<"Enter the redmi model name:";
        cin>>redmi_model;
      }

      void display_redmi_model();
};

void Redmi::display_redmi_model(){
  cout<<redmi_model<<"model have new camera model:"<<camera_model<<endl;
}




int main(){
   

  Vivo vivo;
  vivo.take_camera_model();
  vivo.take_vivo_model();
  vivo.display_vivo_model();

  Redmi redmi;
  redmi.take_camera_model();
  redmi.take_redmi_model();
  redmi.display_redmi_model();



  Family fam;
  fam.take_bother_data();
  fam.take_sister_name();
  fam.take_prensts_name();
  fam.display_family_data();
  
  Persentage student;
  student.set_data(); 
  student.take_marks();
  student.display_marks();
  student.persentege_of_mark();
   
  Programmer sufiyan;
  sufiyan.set_data();
  sufiyan.take_emplyee_data();
  sufiyan.take_language_name();
  sufiyan.display_data();
  sufiyan.display_details();
  sufiyan.display_language_name();


 return 0;
}