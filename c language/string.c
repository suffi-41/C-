#include<stdio.h>
#include<string.h>

int main(){
  
  /*string method*/

  char name[100], new_name[100];
  /*
  printf("Enter your name:");
  scanf("%s",name);
  printf("Enter new name :");
  scanf("%s",new_name);
  printf("%s and %s",name, new_name);
  */
  printf("Enter your name:");
  fgets(name, 100, stdin);

  printf("Enter you new_name:");
  fgets(new_name, 100, stdin);
  puts(new_name);
 // strcpy(name,new_name);
 strcat(name,new_name);
 puts(name);


  
    return 0;
}