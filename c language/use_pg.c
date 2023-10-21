#include<stdio.h>
#include<string.h>

int sum_of_arr(int arr[], int n);
int sum_of_double_arr(int arr[],int n, int arr2[],int m);

int main(){

    

   FILE *fptr;
   fptr=fopen("print.txt","r");
   char ch;

    int n;
     
     printf("%c",fgetc(fptr));
    fclose(fptr);

    fptr=fopen("print.txt","w");
    printf("Enter the number:");
    scanf("%d",&n);    

    int arr[n];
    printf("Enter the multiple number");
    int i=0;
    while(i<n){
      scanf("%d",&arr[i]);
      i++;
    }

    int x=0;
    while(x<n){
      fprintf(fptr, "%d \n", arr[x]);
      x++;
    }
    int sum=sum_of_arr(arr,n);
    fprintf(fptr, "sum of multiple no is %d\n",sum);
    fprintf(fptr,"sum of two arr ids %d\n",sum_of_double_arr(arr, n, arr, n));
    fclose(fptr);

    
    return 0;
}

int sum_of_arr(int arr[], int n){
  int sum=0;
  static int i;
  while(i<n){
    sum+=arr[i];
    i++;
  }

  return sum;
}

int sum_of_double_arr(int arr[] , int n, int arr2[], int m){
  int sum_arr[n];
  static int i;
  while(i<n){
    sum_arr[i]=arr[i]+arr2[i];
    i++;
  }

int sum=0;
static int x;
while(x<n){
  sum+=sum_arr[x];
  x++;
}

return sum;
}