#include<iostream>
using namespace std;

class Binary{
  private:
    string binary;
  public:
    void input_binary(){
        cout<<"Enter the binary no:";
        cin>>binary;
    }

    void check_binary(){
        for(int i=0; i<binary.length(); i++){
            if(binary.at(i)!='0' && binary.at(i)!='1'){
                cout<<"incarect binary no, please Enter correct binary no;"<<endl;
            }

            else if(binary.at(i)=='1' && binary.at(i)=='0'){
                cout<<"You have to enter right binary no"<<endl;
            }
        }
    }
    void once_compliment_no(){
        for(int i=0; i<binary.length(); i++){
            if(binary.at(i)=='1'){
                 binary.at(i)='0';
            }

            else if(binary.at(i)=='0'){
                binary.at(i)='1';
            }
            
        }
    }

    void display_binary_no(){
        cout<<"Binary no is :"<<binary<<endl;
    }
    
    };

int main(){
    
   Binary first;
   first.input_binary();
   first.check_binary();
   first.once_compliment_no();
   first.display_binary_no();


    return 0;
}