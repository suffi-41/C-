#include<stdio.h>
#include<string.h>

int main(){
/*
 FILE *fptr;
 fptr=fopen("print.txt" ,"r");
 char ch[100];
 int i=0;
  while(i<100){
    fscanf(fptr, "%c",&ch[i]);
    printf("%c",ch[i]);
   i++;
  }
 fclose(fptr);
*/

FILE *fptr;
fptr=fopen("print.txt","r");
char word[100];
fscanf(fptr,"%s",word);
printf("%s",word);
fclose(fptr);

    return 0;
}