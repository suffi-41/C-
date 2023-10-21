#include<stdio.h>

void reverse_arr(int arr[],int n){
    static int i;
    while(i<n/2){
       int first_value=arr[i];
       int second_value=arr[n-1-i];

       arr[i]=second_value;
       arr[n-1-i]=first_value;

       i++;
    }
}

void print_reverse_arr(int arr[], int n){
    static int i;
    for(i; i<n;i++){
        printf("Index:(%d)=>%d\n",i+1,arr[i]);
    }
}

int main(){
   int n;
   printf("Enter the value of n:");
   scanf("%d",&n);
   printf("Enter the multiple number:");
   int arr[n];
   static int i;
   while(i<n){
     scanf("%d",&arr[i]);
   }
  reverse_arr(arr,n);
  print_reverse_arr(arr,n);


    return 0;
}