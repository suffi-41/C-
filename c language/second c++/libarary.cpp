#include<iostream>
using namespace std;

class Library{
    protected:
      string book[]=new string[100];
      int no_of_book;

    public:
      bool boolean;
      Library(){
       this->no_of_book=0;
       boolean=true;
      }
      void Add_book(string book);
      void Show_available_book();
      void Issue_book(string book);
      void Retrun_book(string book);
};

void Library::Add_book(string book){
    this->book[no_of_book]=book;
    cout<<book<<" has been added!"<<endl;
    no_of_book++;
}
void Library::Show_available_book(){
    for(int i=0; i<book.length; i++){
        cout<<"*"<<book[i]<<endl;
    }
}
void Library::Issue_book(string book){
    for(int i=0; i<book.length; i++){
        if(this->book[i]==book){
            cout<<book<<" has been issued!"<<endl;
            no_of_book--;
            this->book[i]=0;
            boolean=false;
            
        }
    }
    if(boolean==true){
        cout<<"This book dosen't exist!"<<endl;
    }
}

void Library::Retrun_book(string book){
       Add_book(book);
       cout<<book<<"has been return !"<<endl;
}
int main(){

    return 0;
}