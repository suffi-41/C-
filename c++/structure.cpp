#include<iostream>
using namespace std;

struct Employee{
    int id;
    float cgp;
    string name;
};

typedef struct Student{
    string name;
    float cgp;
    int id;
}student ;

int main(){
struct Employee sufiyan;
sufiyan.id=41;
sufiyan.cgp=9.81;
sufiyan.name="Mohd sufiyan";
cout<<endl<<"This is sufiyan detalis"<<endl;
cout<<sufiyan.id<<endl;
cout<<sufiyan.cgp<<endl;
cout<<sufiyan.name<<endl;

student Rehan;
Rehan.name="Rehan";
Rehan.cgp=9.64;
Rehan.id=48;
cout<<endl<<"This is Rehan details"<<endl;
cout<<Rehan.name<<endl;
cout<<Rehan.cgp<<endl;
cout<<Rehan.id<<endl;
    return 0;
}