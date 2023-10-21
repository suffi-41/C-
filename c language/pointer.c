#include<stdio.h>
#include<string.h>

int main(){
    int x=41;
    int *ptr=&x;
    printf("%d",*ptr);

    int arr[3];
    printf("\nEnter the multiple number:");
    int *arrptr=&arr[0];
    for(int i=0; i<3; i++ ){
        scanf("%d",&*(arrptr+i));
    }
    printf("Output value:\n");
    for(int i=0; i<3; i++){
        printf("%d\n",*(arrptr+i));
    }


    return 0;
}