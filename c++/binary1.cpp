#include<iostream>
using namespace std;

class Binary{
    protected:
       string binary;
    
    public:
       void take_binary_no();
       void set_binary_no();
       void check_binary_no();
       void once_compliment_binary_no();
       void display_binary_no();
};

void Binary::take_binary_no(){
    cout<<"Enter the binary number::";
    cin>>binary;
}

void Binary::set_binary_no(){
    this->binary=binary;
}

void Binary::check_binary_no(){
    for(int i=0; i<binary.length(); i++){
        if(binary.at(i)!='0' && binary.at(i)!='1'){
            cout<<"Incorrect binary number, Please enter the correct binary number!"<<endl;
            break;
        }

        else{
            cout<<"Correct binary number:"<<endl;
             break;
        }
    }
}

void Binary::once_compliment_binary_no(){
    for(int i=0; i<binary.length(); i++){
        if(binary.at(i)=='0'){
            binary.at(i)='1';
        }
        else{
            binary.at(i)='0';
        }
    }
}

void Binary::display_binary_no(){
     cout<<"Binary no is:"<<binary<<endl;
}


class Complex{
    private:
      int x,y;

    public:
      Complex(){
         cout<<"Enter the value of x:";
         cin>>x;
         cout<<"Enter the value of y:";
         cin>>y;
      }
      void set_complex_no(){
         this->x=x;
         this->y=y;
      }

      void display_complex_no(){
         cout<<"Complex no is:"<<x<<"+"<<y<<"i"<<endl;
      }

      void sum_complex_no(Complex o, Complex q){
          x=o.x+q.x;
          y=o.y+q.y;
       }
};

class Publicclass{
    public:
     string name;
     string ista_id;

    void display(){
        cout<<"Your name is:"<<name<<endl;
        cout<<"Your ista id is:"<<ista_id<<endl;
    }
};

struct Employee{
    string name;
    string father_name;
    string mother_name;

};

typedef struct Student{
    string name;
    int id;
    float marks;
}Student;

int main(){

    // Student aman;
    // aman.name="Aman khan";
    // aman.id=41;
    // aman.marks=92.89;

    // cout<<aman.name<<endl;
    // cout<<aman.id<<endl;
    // cout<<aman.marks<<endl;

    // struct Employee sufiyan;
    // sufiyan.name=" mohd sufiyan";
    // sufiyan.father_name="mohd shabbber";
    // sufiyan.mother_name="shabnam khatun";
    //  cout<<sufiyan.name<<endl;
    //  cout<<sufiyan.father_name<<endl;
    //  cout<<sufiyan.mother_name<<endl;

     
//      Publicclass sufiyan;
//      sufiyan.name="sufiyan";
//      sufiyan.ista_id="suff__41";
//      sufiyan.display();

// //   Complex num1, num2, sum;
//   sum.sum_complex_no(num1,num2);
//   sum.display_complex_no();


//   Binary *pointer_binary=new Binary;
//    pointer_binary->take_binary_no();
//    pointer_binary->set_binary_no();
//    pointer_binary->check_binary_no();
//    pointer_binary->once_compliment_binary_no();
//    pointer_binary->display_binary_no();
    return 0;
}