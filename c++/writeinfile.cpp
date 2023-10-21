#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

/*ofstream out("cpp.txt");
  string name;
  cout<<"enter your name:";
  cin>>name;
  out<<name<<endl;
  out.close();
*/
  ofstream print;
  print.open("cpp.txt");
    string first_name;
    cout<<"Enter your first name:";
    cin>>first_name;
    print<<first_name<<endl;
  print.close();

  ifstream read;
  read.open("cpp.txt");
  string name;
  getline(read, name);
  cout<<name<<endl;
  read.close();
    return 0;
}