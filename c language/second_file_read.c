#include<stdio.h>
#include<string.h>

int main(){
  FILE *file;
  file=fopen("textfile.txt","r");
  char ch ;
  ch=fgetc(file);
  while(ch != EOF){
  printf("%c",ch);
  ch=fgetc(file);
  }
  fclose(file);



    return 0;
}
