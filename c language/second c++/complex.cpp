#include<iostream>
#include<string>
using namespace std;

class Complex{
    private: 
      int x,y;
    
    public:
      Complex(){
        cout<<"Enter the value of x:";
        cin>>x;
        cout<<"Enter thre value of y:";
        cin>>y;

      }

      void set_complex_no();
      void display_complex_no();
      
      void sum_complex_no(Complex o, Complex p){
          cout<<"summing of two complex no:"<<endl;
             x=o.x+p.x;
             y=o.y+p.y;
      }
};

void Complex::set_complex_no(){
     this->x=x;
     this->y=y;
}

void Complex::display_complex_no(){
     cout<<"Complex no is:"<<x<<"+"<<y<<"i"<<endl;
}


int main(){

    Complex num,num1;
    Complex sum=Complex();
    num.set_complex_no();
    num.display_complex_no();
    num1.set_complex_no();
    num1.display_complex_no();
    sum.sum_complex_no(num,num1);
     sum.display_complex_no();



    return 0;
}