#include<stdio.h>
#include<string.h>
/*function protocall*/
void replace_number_without_pass_of_address(int n, int m);
void replace_number(int *ptr1, int *ptr2);

int main(){
    int a,b;
  for(int i=0; ; i++){
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    

    replace_number(&a, &b);
   
    printf("\na=%d and b=%d\n",a,b);

     replace_number_without_pass_of_address(a,b);
    /*here can't replace of value a and b because here pass of copy value of a and b*/
    printf("value of a=%d \n value of b is %d",a,b);
  }

    return 0;
}

/*function define*/

void replace_number_without_pass_of_address(int n, int m){
    int temp=n;
        n=m;
        m=temp;
}
void replace_number(int *ptr1, int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
