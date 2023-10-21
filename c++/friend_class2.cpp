#include<iostream>
using namespace std;

class Y;

class X{
  private:
    int x;
  public 
    friend void add(X,Y);
 
    void take_number_of_x(){
        cout<<"Enter your name:";
        cin>>x;

     }

     void display_of_x(){
        cout<<"The value of x:"<<x<<endl;
     }

};

class Y{
  private:
     int y;
  public:
    friend void add(x,y);
     void take_number_of_y(){
        cout<<"The value of y:";
        cin>>y;
     }

     void display_of_y(){
        cout<<"The value of y:"<<y<<endl;
     }
    
};

void add(X n, Y m){
    cout<<"Summing of x and y is:"<<n.x+m.y<<endl;
}


int main(){

  X x;
  x.take_number_of_x();

  Y y;
  y.take_number_of_y();

  add(x,y);
    return 0;
}