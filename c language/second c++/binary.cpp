#include<iostream>
using namespace std;

// first class
class Binary{
    private:
      string binary;

    public:
       Binary(){
          cout<<"Enter the binary number:";
          cin>>binary;
       }

       void set_binary_no();
       void check_binary_no();
       void once_compliment_no();
       void display();
};

void Binary::set_binary_no(){
      this->binary=binary;
}

void Binary::check_binary_no(){
    for(int i=0; i<binary.length(); i++){
        if(binary.at(i) != '1' && binary.at(i) !='0'){
            cout<<"Incorrect binary no ,Please enter write binary no:"<<endl;
              break;
        }

        else{
            cout<<"Correct binary number:"<<endl;
            break;
        }
    }
}

void Binary::once_compliment_no(){
    for(int i=0; i<binary.length(); i++){
        if(binary.at(i)=='1'){
            binary.at(i)='0';
        }

        else{
            binary.at(i)='1';
        }
    }
    cout<<endl<<"conver into once compliment numberr:"<<endl;
}
 
void Binary::display(){
    cout<<"Binary no is ;"<<binary<<endl;
}

// second class
class Check_number{
    private:
      string number;

    public:
      bool statment=true;

       Check_number(){
        cout<<"Enter the number of 10 digit:";
        cin>>number;
       }
      
       void set_number();
       void check_number();
       void conver_number();
       void display_number();
       void check_gradge();
       void switch_stament();
       
};

void Check_number::set_number(){
     this->number=number;
}

void Check_number::check_number(){
    for(int i=0; i<number.length(); i++){
        if(number.at(i)!='0' && number.at(i)!='1' && number.at(i)!='2' && number.at(i)!='3' && number.at(i)!='4' && number.at(i)!='5' && number.at(i)!='6' && number.at(i)!='8' && number.at(i)!='9'){
             statment=false;     
        }  
        } 
    
    if(statment==false){
        cout<<"Incorrect number number:"<<endl;

    }
    else{
        cout<<"Correct number:"<<endl;
    }

}


void Check_number::conver_number(){
     for(int i=0; i<number.length(); i++){
        if(number.at(i)=='0' || number.at(i)=='1' || number.at(i)=='2' || number.at(i)=='3' || number.at(i)=='4' || number.at(i)=='5' || number.at(i)=='6' || number.at(i)=='7' || number.at(i)=='8' || number.at(i)=='9'){
             number.at(i)='A';
        }
        else{
            number.at(i)='@';
        }
     }
}

void Check_number::display_number(){
    cout<<"Number is:"<<number<<endl;
}

// first function of else if statment
void Check_number::check_gradge(){
    int mark;
    cout<<"Enter your marks";
    cin>>mark;

    if(mark>0 && mark<34){
        cout<<"you have failed!"<<endl;
    }
    else if(mark>=34 && mark<50){
        cout<<"You have pass!"<<endl;
    }
    else if(mark>=50 && mark<70){
        cout<<"you have pass with second division:"<<endl;
    }
    else if(mark>=70 && mark<90){
        cout<<"you have pass with first division!"<<endl;
    }
    else if(mark>=80 && mark<=100){
        cout<<"you have pass , and you are topper in the class:"<<endl;
    }
    else{
        cout<<"you have enter Wronge marks!"<<endl;
    }

}

// second function of switch statment
void Check_number::switch_stament(){
    string name;
    int age;
    cout<<"Enter you age:";
    cin>>age;

    switch(age){
        case 12: cout<<"you are child"<<endl;
            break;
        case 15:  cout<<"youe are tineger:"<<endl;
            break;
        case 18:  cout<<"you are adult:"<<endl;
            break;
        case 20:  cout<<"you can derive the car:"<<endl;
            break;
        case 30:  cout<<"your age is:"<<age<<endl;
            break;
        case 40:  cout<<"your are old :"<<endl;
            break;
        case 1: 
                
                cout<<"Enter your name:";
                cin>>name;
                cout<<"your name is:"<<name<<endl;

            break;
        case 10:
                 int number;
                 cout<<"Enter the number:";
                 cin>>number;

                 if(number%2==0){
                    cout<<"even number"<<number<<endl;
                 }
                 else if(number%2!=0){
                    cout<<"odd number is:"<<number<<endl;
                 }

            break;
        default: cout<<"invalid age:"<<endl;

    }
}




int main(){

    
    
    
       Check_number number;
       number.check_gradge();
       number.switch_statment();
    // number.set_number();
    // number.check_number();
    // number.conver_number();
    // number.display_number();

    // Binary binary_no;
    // binary_no.set_binary_no();
    // binary_no.check_binary_no();
    // binary_no.once_compliment_no();
    // binary_no.display();

    return 0;
}