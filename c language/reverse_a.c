#include<stdio.h>
#include<string.h>

int sum(int a, int b){
    return a+b;
}

void reverse_arr(int arr[], int n){
    for(int i=0; i<n/2; i++){
        int first_value=arr[i];
        int second_value=arr[n-i-1];
        arr[i]=second_value;
        arr[n-i-1]=first_value;
    }
}


void print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
}


void selting_function(char password[]){
    char selt[100]="@78su1";
    char new_password[100];
    strcpy(new_password, password);
    strcat(new_password, selt);
    printf("%s",new_password);

}


int main(void){
 // reversing of array of this method , we have to write this type of code!
 int n;
 printf("Enter the  integar number:");
 scanf("%d",&n);
 int arr[n];
 for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
 }
 
 reverse_arr(arr,n);
 print_arr(arr,n);


 // we have to write selting of the paasword code!

 char password[100];
 scanf("%s",password);
 selting_function(password);

    return 0;
}