#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &aman){
    for(int i=0; i<aman.size(); i++){
        cout<<aman[i]<<"\t";
    }
}

void display_name(vector<string> &name){
    for(int i=0; i<name.size(); i++){
        cout<<name[i]<<endl;
    }
}
int main(){
    vector<int> sufiyan;
    int vectorsize, element,j;
     cout<<"Enter the size of vector:";
     cin>>vectorsize;

    for(int i=0; i!=vectorsize; i++){
        cout<<"Enter the element of add this vector:";
        cin>>element;
        sufiyan.push_back(element);
    }
 j=0;
    while(j<sufiyan.size()){
        cout<<sufiyan[j]<<endl;
        j++;
    }

    display(sufiyan);

    vector<string> aman;
    int size;
    string name;
    
    cout<<"Enter the no of name:";
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"Enter your name:";
        cin>>name;
        aman.push_back(name);
    }

    display_name(aman);

    return 0;
}