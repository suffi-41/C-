#include<iostream>
using namespace std;

int current_money_with_gst(int current_money ){
    return current_money+(current_money*0.05);
}

int main(){
     int current_money;
    cout<<"Enter your amount:";
    cin>>current_money;

    cout<<"If you will deposite "<<current_money<<" you will get with 5% GST after one years ";
    cout<<current_money_with_gst(current_money)<<endl;
    return 0;

}