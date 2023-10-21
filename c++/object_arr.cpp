#include<iostream>
using namespace std;

class Friend{
    private:
      string friend_name;
      string insta_username;
      int friend_phone_no;

    public:
      void take_friend_details();
      void display_friend_details();
      void friendship_opiniun();
};

void Friend::take_friend_details(){
    cout<<"Enter your name :";
    cin>>friend_name;
    cout<<"Enter your phone no:";
    cin>>friend_phone_no;
    cout<<"Enter your insta user name:";
    cin>>insta_username;
}

void Friend::display_friend_details(){
    cout<<"Your name is: "<<friend_name<<endl;
    cout<<"Your phone no is :"<<friend_phone_no<<endl;
    cout<<"your ista user name is :"<<insta_username<<endl;
}

void Friend:: friendship_opiniun(){
    cout<<"this details of "<<friend_name<<"! this person is good , you will trust him"<<"his insta user name is "<<insta_username<<endl;
}


int main(){
int n;
cout<<"Enter the no of friends :";
cin>>n;

Friend group_friend[n];
 for(int i=0; i<n; i++){
    group_friend[i].take_friend_details();
    group_friend[i].display_friend_details();
    group_friend[i].friendship_opiniun();
 }

    return 0;
}