#include<iostream>
using namespace std;

int main(){
  
 int *number=new int(4);
 float *pi=new float(4.6);

 int *arr=new int[5];
 for(int i=0; i<5; i++){
    cout<<"Enter the multiple no:";
    cin>>arr[i];
 }
delete[] arr;
delete arr;

 for(int i=0; i<5; i++){
    cout<<arr[i]<<endl;
 }
    return 0;
}