#include<iostream>
using namespace std;

// using constructure class

class complex{
    private:
      int x,y;
    public:

      complex(){}
      complex(int x, int y ){
        this->x=x;
        this->y=y;
      }
      void display_complex_no();
      
};  


void complex::display_complex_no(){
    cout<<"Complex no is:"<<x<<"+"<<y<<"i"<<endl;
}



int main(){

       complex num(9,9);
      num.display_complex_no();

    return 0;
}