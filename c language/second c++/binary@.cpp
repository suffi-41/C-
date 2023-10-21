#include<iostream>
using namespace std;

class Binary{
    private:
      string binary;

    public:
      bool boolean;

       Binary(){
         cout<<"Enter the binary number:";
         cin>>binary;
       }
       void set_binary();
       void check();
       void once_compliment();
       void display();
};
void Binary::set_binary(){
    this->binary=binary;
    this->boolean=boolean=true;
}
void Binary::check(){
    for(int i=0; i<binary.length(); i++){
        if(binary.at(i)!='1' || binary.at(i)!='0'){
            cout<<"Incorrect binary number!"<<endl;
            boolean=false;
            break;
        }
    }
    if(boolean==true){
        cout<<"Correct binary numbe!"<<endl;
    }
}
void Binary::once_compliment(){
    for(int i=0; i<binary.length(); i++){
        if(binary.at(i)=='1'){
            binary.at(i)='0';
        }
        else{
            binary.at(i)='1';
        }
    }
    cout<<"Binary number is once compliment:"<<endl;
}
void Binary::display(){
    cout<<"Binary is:"<<binary<<endl;
}
int main(void){
    Binary *binary=new Binary();
    binary->set_binary();
    binary->check();
    binary->once_compliment();
    binary->display();
    return 0;
}