#include<iostream>
using namespace std;

class Binary{
    private:
      string binary;
    public:
      void take_binary_no_from_user();
      void set_binary_no();
      void check_binary_no();
      void once_compliment_binary_no();
      void display_binary_no();
};

void Binary::take_binary_no_from_user(){
    cout<<"Enter the binary no:";
    cin>>binary;
}

void Binary::set_binary_no(){
    this->binary=binary;
}

void Binary::check_binary_no(){
    for(int i=0; i<binary.length(); i++){
        if(binary.at(i)!='1'&& binary.at(i)!='0'){
            cout<<"You have entered incorrecte binary no, pleace enter correct binary no: "<<endl;
        }

        else if(binary.at(i)=='1' &&  binary.at(i)=='0'){
            cout<<"You have entered correct binary no !"<<endl;
        } 
    }
}

void Binary:: once_compliment_binary_no(){
    for(int i=0; i<binary.length(); i++){
        if(binary.at(i)=='1'){
            binary.at(i)='0';
        }

        else if(binary.at(i)=='0'){
            binary.at(i)='1';
        }
    }  
}

void Binary:: display_binary_no(){
    cout<<"Binary no is:"<<binary<<endl;
}

 
class Bank{
    private:
      int principle;
      int year;
      float intranste;
    
    public:
      Bank(int p, int y, float r){
            principle=p;
            year=y;
            intranste=r;
            
      }

      void show(){
         for(int i=0; i<year; i++ ){
             principle=principle+(intranste*(1+i));
         }
      }
    
};



int main(){
    
     

    Binary binary;
     binary.take_binary_no_from_user();
     binary.set_binary_no();
     binary.check_binary_no();
     binary.display_binary_no();
     binary.once_compliment_binary_no();
     binary.display_binary_no();

    return 0;
}