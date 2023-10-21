#include<iostream>
using namespace std;

template<class A, class S>

class Vector{
    private:
      A name;
      S age;
    
    public:
       Vector(A name, S age){
          this->name=name;
          this->age=age;
       }

       void display_vector(){
         cout<<"Your name is:"<<name<<endl;
         cout<<"your age is:"<<age<<endl;
       }
};


template<class N, class M, class O>
void display_of_variable(N name, M age, O cgp){
    cout<<"your name is:"<<name<<endl;
    cout<<"your age is :"<<age<<endl;
    cout<<"your marks is:"<<cgp<<endl;
}

int main(){
    
    display_of_variable("sufiyan",18, 9.8);
    display_of_variable(4.1,"sufiyan",98);


    Vector<string, int> sufiyan("Mohd Sufiyan",17);
    sufiyan.display_vector();

    Vector<string , float> aman("Aman khan",18.34);
    aman.display_vector();
    return 0;
}