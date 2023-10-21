#include<iostream>
using namespace std;

void reverse_arr(int arr[], int n){
    static int i;
    while(i<n/2){
      int first_value=arr[i];
      int second_value=arr[n-1-i];

      arr[i]=second_value;
      arr[n-1-i]=first_value;

      i++;
    }
}

void print_arr(int arr[], int n){
     int i;
    for(i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int sum_of_array(int arr[], int n){
    int sum=0;
    static int i;
    for(i; i<n; i++){
        sum+=arr[i];
    }
    return sum;
    
}

int main(){

int arr[5];
cout<<"Enter the multiple number:"<<endl;
static int i;
while(i<5){
    cin>>arr[i];
    i++;
}
for(int x=0; x<5; x++ ){
    cout<<arr[x];
}

reverse_arr(arr,5);
print_arr(arr,5);

cout<<"sum of array is:"<<sum_of_array(arr, 5)<<endl;
   return 0;
}