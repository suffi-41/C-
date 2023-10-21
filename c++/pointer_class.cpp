#include<iostream>
using namespace std;

class Complex{
    private:
       int real, imaginary;
    
    public:
       void set_data(int real, int imaginary){
           this->real=real;
           this->imaginary=imaginary;
       }

       void display(){
          cout<<"Complex no is:"<<real<<"+"<<imaginary<<"i"<<endl;
       }
       
};

class Complex1{
    private:
      int real, imaginary;
    
    public:
      Complex1(int real, int imaginary){
        this->real=real;
        this->imaginary=imaginary;
      }

      void dispaly(){
        cout<<"Complex no is:"<<real<<"+"<<imaginary<<"i"<<endl;
      }
};

int main(){
    
   Complex1 *number1=new Complex1(7,8);
   number1->dispaly();

   Complex *number=new Complex;
   number->set_data(4,7);
   number->display();

   Complex *arr=new Complex[3];
   arr[0].set_data(3,6),
   arr[0].display();
   
    return 0;
}