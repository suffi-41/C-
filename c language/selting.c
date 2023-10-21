#include<stdio.h>
#include<string.h>

void seltin_password(char password[]){
    char selt[100]="@4140";
    char new_password[100];

    strcpy(new_password,password);
    strcat(new_password,selt);


    printf("%s,You have got new password",new_password);
}

int main(){
 char password[100];
 printf("Enter the password:");
 scanf("%s",password);
 seltin_password(password);

    return 0;
}