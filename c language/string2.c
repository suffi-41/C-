#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){
 char name[100], ch;

  static int i;
  while(i != '\n'){
    scanf("%c",&ch);
     name[i]=ch;

     i++;

  }

  name[i]='\0';
  puts(name);


    return 0;
}